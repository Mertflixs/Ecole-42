/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:06 by agunes            #+#    #+#             */
/*   Updated: 2022/05/30 18:01:05 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(t_list *ps, int x)
{
	int	i;

	i = 0;
	free(ps->stacka);
	free(ps->stackb);
	free(ps->fakea);
	free(ps->index);
	if (x == 2)
	{
		ft_printf("Error\n");
	}
	if (x == 1)
	{
		while (ps->split[i])
			free(ps->split[i++]);
		free(ps->split);
	}
	free(ps);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_list	*ps;
	int		x;

	x = argc - 1;
	ps = malloc(sizeof(t_list) * x);
	if (!ps)
		return (0);
	setup(ps, argv);
	ft_sort(ps);
	if (!sortcontrol(ps))
		return (0);
	if (!same(ps))
		return (0);
	if (ps->alen == 5)
		fivearg(ps);
	if (ps->alen == 3)
	{
		ps->min = ps->fakea[0];
		ps->med = ps->fakea[1];
		ps->max = ps->fakea[2];
		threearg(ps);
	}
	radix(ps);
	ft_exit(ps, 0);
}
