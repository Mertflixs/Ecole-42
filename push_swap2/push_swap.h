/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:19:45 by agunes            #+#    #+#             */
/*   Updated: 2022/05/27 17:01:24 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	int	*stacka;
	int	*stackb;
	int	*fakea;
	int	*index;
	int	maxbit;
	int	alen;
	int	fakealen;
	int	blen;
}		t_list;

void	shift_up(int *arr, int len);
void	shift_down(int *arr, int len);
void	ra(t_list *ps, int len);
void	rb(t_list *ps, int len);
void	pb(t_list *ps);
void	pa(t_list *ps);
int		ft_sort(t_list *ps);
int		indexbul(t_list *ps, int nbr);
void	radix(t_list *ps);
int		maxbit(t_list *ps);
int		sortcontrol(t_list *ps);

#endif