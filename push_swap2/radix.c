/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:34:35 by agunes            #+#    #+#             */
/*   Updated: 2022/05/26 15:16:10 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_list *ps)
{
	int	i;
	int	j;
	int	x;

	j = 0;
	i = 0;
	x = 0;
	while (i < ps->maxbit)
	{
		j = 0;
		x = 0;
		while (j < ps->fakealen)
		{
			x = indexbul(ps);
			if ((x >> i) & 1)
				ra(ps, ps->alen);
			else
				pb(ps);
			j++;
		}
		while (ps->blen)
			pa(ps);
		i++;
	}
}