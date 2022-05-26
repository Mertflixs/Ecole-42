/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:06:28 by agunes            #+#    #+#             */
/*   Updated: 2022/05/26 16:05:04 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	shift_up(int *arr, int len)
{
	int	i;
	int	*arr1;

	i = 1;
	arr1 = malloc(sizeof(int) * len);
	while (i < len)
	{
		arr1[i - 1] = arr[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		arr[i] = arr1[i];
		i++;
	}
	arr[i] = 0;
}

void	shift_down(int *arr, int len)
{
	int	i;
	int	temp;
	int	*arr1;

	i = 0;
	arr1 = malloc(sizeof(int) * len);
	while (i < len)
	{
		arr1[i] = arr[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		arr[i + 1] = arr1[i];
		i++;
	}
	arr[0] = 0;
}

int	indexbul(t_list *ps)
{
	int	i;
	int	j;

	i = 0;
	while (i < ps->fakealen)
	{
		if (ps->stacka[0] == ps->fakea[i])
			return (i);
		i++;
	}
	return (0);
}

int	maxbit(t_list *ps)
{
	int		i;
	int		a;

	i = 0;
	a = ps->alen;
	while (a)
	{
		a >>= 1;
		i++;
	}
	return (i);
}
