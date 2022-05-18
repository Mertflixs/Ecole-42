/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:13:31 by agunes            #+#    #+#             */
/*   Updated: 2022/05/18 12:46:45 by agunes           ###   ########.fr       */
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
    int c;
    c = test->alen;
    while(c + 1)
    {
        test->stackb[c + 1] = test->stackb[c];
        c--;
    }
    test->stackb[0] = test->stacka[0];
	test->blen++;
    test->alen--;
    shift_up(test->stacka, test->alen);
}

void pa(t_list *test)
{
    int c;
    c = test->blen;
    while(c + 1)
    {
        test->stacka[c + 1] = test->stacka[c];
        c--;
    }
    test->stacka[0] = test->stackb[0];
	test->blen--;
    test->alen++;
    shift_up(test->stackb, test->blen);
}

int main(int argc, char **argv)
{
	t_list	*test;

	test = malloc(sizeof(t_list));
	int i;
	int a = 0;
	int x = argc - 1;
    test->alen = x;
	test->stacka = malloc(sizeof(int) * x);
	test->stackb = malloc(sizeof(int) * x);
    test->fa1 = malloc(sizeof(int) * x);
    test->sorted= malloc(sizeof(int) * x);
	i = 1;
	while(i <= x)
	{
		test->stacka[a] = atoi(argv[i]);
		i++;
		a++;
	}
	i = 0;
    test->sorted = sorted(test->stacka, test->alen);
    for(i = 0; i < argc - 1; i++)
    {
        printf("[%d] \n", test->sorted[i]);
    }
    i = 0;
	return (0);
}
