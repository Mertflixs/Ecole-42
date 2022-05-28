/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:23:00 by agunes            #+#    #+#             */
/*   Updated: 2022/05/28 13:24:02 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	same(t_list *ps)
{
	int	i;
	int	j;
	int	sayi;

	i = 0;
	j = 0;
	sayi = 0;
	while (i < ps->alen)
	{
		j = 0;
		sayi = 0;
		while (j < ps->alen)
		{
			if (ps->stacka[j] == ps->stacka[i])
				sayi++;
			if (sayi > 1)
				ft_exit(ps, 1);
			j++;
		}
		i++;
	}
	return (1);
}
