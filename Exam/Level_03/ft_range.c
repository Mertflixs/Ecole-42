/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:59:41 by agunes            #+#    #+#             */
/*   Updated: 2022/06/09 11:59:42 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int *arr;
	int i;
	int temp = start;

	i = 0;
	arr = malloc(100);
	if(end < start)
	{
		start = end;
		end = temp;
	}
	while(start <= end)
	{
		arr[i] = start;
		start++;
		i++;
	}
	arr[i] = start;
	return (arr);
}

int main(void)
{
	int i; 
	int *arr;

	arr = ft_range(5, -1);

	i = 0;
	while(i < 10)
		printf("%d", arr[i++]);
}