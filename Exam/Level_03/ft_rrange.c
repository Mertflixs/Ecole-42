/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:59:42 by agunes            #+#    #+#             */
/*   Updated: 2022/06/09 11:59:43 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *arr;
	int i;
	int max;
	int temp = start;

	arr = malloc(100);
	i = 0;
	max = end;

	if(start > end)
	{
		start = end;
		end = temp;
	}
	while(end >= start)
	{
		arr[i] = end;
		end--;
	}
	return (arr);
}

int main(void)
{
	int *arr;
	arr = ft_rrange(5, 12);
	free(arr);
}