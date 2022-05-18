/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:13:31 by agunes            #+#    #+#             */
/*   Updated: 2022/05/18 18:18:00 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *sorted(int *arr, int l)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    int *arr1 = malloc(sizeof(int) * l);
    while (i < l)
    {
        arr1[i] = arr[i];
        i++;
    }
    i = 0;
    while (i < l)
    {
        j = 0;
        while (j < l)
        {
            if(arr1[i] < arr1[j])
            {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
            j++;
        }
        i++;
    }
    return arr1;
}

int is_sorted(int *arr, int l)
{
    int i = 0;
    int j = 0;
    
    while (i < l)
    {
        j = 0;
        while (j < l)
        {
            if(arr[i] >= arr[j])
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

int	*shift_down(int *arr, int l)
{
	int i;
	int temp;
	int *arr1;

	i = 1;
	arr1 = malloc(sizeof(int) * 20);
	arr1[0] = 0;
	while(i < l)
	{
		arr1[i] = arr[i - 1];
		i++;
	}
	return arr1;
}

int find_index(t_list *test, int a)
{
    int i;

    i = 0;
    while(i < test->alen)
    {
        if(a == test->sorted[i])
            break;
        i++;;
    }
    return i;
}


void    shift_up(int *arr, int c)
{
    int i = 0;
    int x = c;
    while(i < x)
    {
        arr[i] = arr[i + 1];
        i++;
    }
    arr[i] = 0;
}

void	ra(t_list *test)
{
    int x;
    x = test->alen;
    int i = 0;
    int temp = test->stacka[0];
    while(i < x)
    {
        test->stacka[i] = test->stacka[i + 1];
        i++;
    }
    test->stacka[x - 1] = temp;
    printf("ra\n");
}

void	rb(t_list *test)
{
    int x = test->blen;
    int i = 0;
    int temp = test->stackb[0];
    while(i < x)
    {
        test->stackb[i] = test->stackb[i + 1];
        i++;
    }
    test->stackb[x - 1] = temp;
}

void    pb(t_list *test)
{
    test->blen++;
    test->stackb = shift_down(test->stackb, test->blen);
    test->stackb[0] = test->stacka[0];
    test->alen--;
    shift_up(test->stacka, test->alen);
    printf("pb\n");
}

void pa(t_list *test)
{
    test->alen++;
    test->stacka = shift_down(test->stacka, test->alen);
    test->stacka[0] = test->stackb[0];
    test->blen--;
    shift_up(test->stackb, test->blen);
    printf("pa\n");
/*     int c;
    c = test->blen;
    while(c + 1)
    {
        test->stacka[c + 1] = test->stacka[c];
        c--;
    }
    test->stacka[0] = test->stackb[0];
	test->blen--;
    test->alen++; */
}

int find_min(t_list *test)
{
    int min = test->stacka[0];
    int i = 0;
    int x = test->alen;
    for(i = 0; i < x; i++)
        printf("x = %d %d ", x,test->stacka[i]);
    printf("\n");
    i = 0;
    while(i < x)
    {
        if(test->stacka[i] < min)
            min = test->stacka[i];
        i++;
    }
    return (min);
}

int main(int argc, char **argv)
{
	t_list	*test;

	test = malloc(sizeof(t_list));
	int i;
	int a = 0;
    int f = 0;
    int tut = argc - 1;
	int x = argc - 1;
    test->alen = x;
	test->stacka = malloc(sizeof(int) * x);
	test->stackb = malloc(sizeof(int) * x);
    test->fa1 = malloc(sizeof(int) * x);
    test->sorted = malloc(sizeof(int) * x);
	i = 1;
	while(i <= x)
	{
		test->stacka[a] = atoi(argv[i]);
		i++;
		a++;
    }
    i = 0;
    while(test->alen)
    {
        int min = find_min(test);
        printf("min = %d\n", min);
        while(test->stacka[0] != min)
        {
            ra(test);
        }
        pb(test);
        i++;
    }
    while(test->blen > 0)
    {
        pa(test);
    }
    i = 0;
     while(i < tut + 1)
    {
        printf("[%d] [%d]\n", test->stacka[i], test->stackb[i]);
        i++;
    } 
	return (0);
}
