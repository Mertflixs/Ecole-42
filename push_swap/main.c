/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:13:31 by agunes            #+#    #+#             */
/*   Updated: 2022/05/17 15:45:14 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    shift_up(t_list *test)
{
    int i = 0;
    int x = test->alen;
    while(i < x)
    {
        test->sa[i] = test->sa[i + 1];
        i++;
    }
    test->sa[i] = 0;
}

void	ra(t_list *test)
{
    int x;
    x = test->alen;
    int i = 0;
    int temp = test->sa[0];
    while(i < x)
    {
        test->sa[i] = test->sa[i + 1];
        i++;
    }
    test->sa[x - 1] = temp;
}

void	rb(t_list *test)
{
    int x = test->blen;
    int i = 0;
    int temp = test->sb[0];
    while(i < x)
    {
        test->sb[i] = test->sb[i + 1];
        i++;
    }
    test->sb[x - 1] = temp;
}

void    pb(t_list *test)
{
    int c;
    c = test->alen;
    while(c + 1)
    {
        test->sb[c + 1] = test->sb[c];
        c--;
    }
    test->sb[0] = test->sa[0];
	test->blen++;
    test->alen--;
    shift_up(test);
}

int main(int argc, char **argv)
{
	t_list	*test;

	test = malloc(sizeof(t_list));
	int i;
	int a = 0;
	int x = argc - 1;
    test->alen = x;
	test->sa = malloc(sizeof(int) * x);
	test->sb = malloc(sizeof(int) * x);

	i = 1;
	while(i <= x)
	{
		test->sa[a] = atoi(argv[i]);
		i++;
		a++;
	}
	i = 0;
    ra(test);
	while(i < x)
	{
		printf("[%d] ", test->sa[i]);
        printf("[%d]\n", test->sb[i]);
		i++;
	}
	return (0);
}
