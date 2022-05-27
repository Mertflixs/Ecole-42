/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:06:28 by agunes            #+#    #+#             */
/*   Updated: 2022/05/27 17:25:16 by agunes           ###   ########.fr       */
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
}

void	shift_down(int *arr, int len)
{
	int	i;
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

int	indexbul(t_list *ps, int nbr)
{
	int	i;

	i = 0;
	while (i < ps->fakealen)
	{
		if (nbr == ps->fakea[i])
			return (i);
		i++;
	}
	return (0);
}

int	maxbit(t_list *ps)
{
	int		i;
	int		a;

	i = 16;
	a = ps->alen;
	while (i >= 0)
	{
		if ((a >> i) & 1)
			return (i + 1);
		i--;
	}
	return (i);
}
