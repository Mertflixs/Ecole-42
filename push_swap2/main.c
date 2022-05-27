/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:06 by agunes            #+#    #+#             */
/*   Updated: 2022/05/27 16:58:49 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*ps;
	int		i;
	int		a;
	int		x;

	i = 0;
	a = 0;
	x = argc - 1;
	ps = malloc(sizeof(t_list) * x);
	ps->stacka = malloc(sizeof(int) * x);
	ps->stackb = malloc(sizeof(int) * x);
	ps->fakea = malloc(sizeof(int) * x);
	ps->index = malloc(sizeof(int) * x);
	ps->alen = x;
	ps->fakealen = ps->alen;
	while (i < x)
	{
		ps->stacka[i] = atoi(argv[i + 1]);
		i++;
	}
	if (!ft_sort(ps))
		return (0);
	radix(ps);
}
