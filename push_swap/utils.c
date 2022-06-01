/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:05:49 by agunes            #+#    #+#             */
/*   Updated: 2022/06/01 13:09:13 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *ps, int len)
{
	int	i;
	int	temp;

	i = 0;
	temp = ps->stacka[0];
	while (i < len - 1)
	{
		ps->stacka[i] = ps->stacka[i + 1];
		i++;
	}
	ps->stacka[ps->alen - 1] = temp;
	ft_printf("ra\n");
}

void	pb(t_list *ps)
{
	if (ps->blen > 0)
	{
		shift_down(ps->stackb, ps->blen);
		ps->stackb[0] = ps->stacka[0];
		shift_up(ps->stacka, ps->alen);
		ps->alen--;
		ps->blen++;
	}
	else
	{
		ps->stackb[0] = ps->stacka[0];
		shift_up(ps->stacka, ps->alen);
		ps->alen--;
		ps->blen++;
	}
	ft_printf("pb\n");
}

void	pa(t_list *ps)
{
	if (ps->alen > 0)
	{
		shift_down(ps->stacka, ps->alen);
		ps->stacka[0] = ps->stackb[0];
		shift_up(ps->stackb, ps->blen);
		ps->blen--;
		ps->alen++;
	}
	else
	{
		ps->stacka[0] = ps->stackb[0];
		shift_up(ps->stackb, ps->blen);
		ps->blen--;
		ps->alen++;
	}
	ft_printf("pa\n");
}

void	ft_sort(t_list *ps)
{
	int	i;
	int	j;
	int	temp;

	i = -1;
	j = 0;
	while (++i < ps->alen)
		ps->fakea[i] = ps->stacka[i];
	i = -1;
	while (++i < ps->alen)
	{
		j = -1;
		while (++j < ps->alen)
		{
			if (ps->fakea[j] > ps->fakea[i + 1] && i + 1 < ps->alen)
			{
				temp = ps->fakea[j];
				ps->fakea[j] = ps->fakea[i + 1];
				ps->fakea[i + 1] = temp;
			}
		}
	}
}

int	sortcontrol(t_list *ps)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ps->alen)
	{
		if (ps->fakea[i] == ps->stacka[i])
			j++;
		i++;
	}
	if (j == i)
		return (0);
	else
		return (1);
}
