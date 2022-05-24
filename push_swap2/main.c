/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:20:06 by agunes            #+#    #+#             */
/*   Updated: 2022/05/24 17:45:48 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_list *ps, int len)
{
    int i;
    int temp2;
    int temp;
    
    i = 0;
    temp = ps->stacka[0];
    while(i < len - 1)
    {
        ps->stacka[i] = ps->stacka[i + 1];
        i++;
    }
    ps->stacka[i] = temp;
}
void shift_up(int *arr, int len)
{
	int i;
	int temp;

	i = 1;
	int *arr1;
	arr1 = malloc(sizeof(int) * len);
	while(i < len)
	{
		arr1[i - 1] = arr[i];
		i++;
	}
	i = 0;
	while(i < len)
	{
		arr[i] = arr1[i];
		i++;
	}
}
void shift_down(int *arr, int len)
{
    int i;
    int temp;

    i = 0;
    int *arr1;
    arr1 = malloc(sizeof(int) * len	);
    while(i < len)
    {
        arr1[i] = arr[i];
        i++;
    }
    i = 0;
    while(i < len)
    {
        arr[i + 1] = arr1[i];
        i++;
    }
    arr[0] = 0;
}
int main(int argc, char **argv)
{
	t_list *ps;
	int i;
	int a;
	int x;

	i = 0;
	a = 0;
	x = argc - 1;
	ps = malloc(sizeof(t_list) * x);
	ps->stacka = malloc(sizeof(int) * x);
	ps->stackb = malloc(sizeof(int) * x);
	ps->alen = x;
	while(i < x)
	{
		ps->stacka[i] = atoi(argv[i + 1]);
		i++;
	}
	shift_down(ps->stacka, ps->alen);
}