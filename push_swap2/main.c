/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:06 by agunes            #+#    #+#             */
/*   Updated: 2022/05/28 13:24:43 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_list *ps, int x)
{
	free(ps->stacka);
	free(ps->stackb);
	free(ps->fakea);
	free(ps->index);
	if (x != 1)
	{
		free(ps->split[0]);
		free(ps->split);
	}
	free(ps);
	printf("Error\n");
	exit(0);
}

int	main(int argc, char **argv)
{
	t_list	*ps;
	int		x;

	x = argc - 1;
	ps = malloc(sizeof(t_list));
	if (!ps)
		return (0);
	setup(ps, x, argv);
	ft_sort(ps);
	if (!sortcontrol(ps))
		return (0);
	if (!same(ps))
		return (0);
	radix(ps);
}
