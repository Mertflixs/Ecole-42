/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:52:26 by agunes            #+#    #+#             */
/*   Updated: 2022/05/27 18:29:06 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setup(t_list *ps, int x, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	k = 0;
	j = 0;
	ps->stacka = malloc(sizeof(int) * x);
	ps->stackb = malloc(sizeof(int) * x);
	ps->fakea = malloc(sizeof(int) * x);
	ps->index = malloc(sizeof(int) * x);
	while (argv[i])
	{
		j = 0;
		ps->split = ft_split(argv[i], ' ');
		while (ps->split[j])
			ps->stacka[k++] = ft_atoi(ps->split[j++], ps);
		free(ps->split[0]);
		free(ps->split);
		i++;
	}
	ps->fakealen = i - 1;
	ps->alen = i - 1;
}
