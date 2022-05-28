/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:12:36 by agunes            #+#    #+#             */
/*   Updated: 2022/05/28 17:59:30 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str, t_list *ps)
{
	int			i;
	long int	sayi;
	int			isaret;

	i = 0;
	sayi = 0;
	isaret = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		isaret -= (str[i++] == '-') * 2;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sayi = (sayi * 10) + str[i++] - '0';
		if (sayi * isaret > 2147483647 || \
			sayi * isaret < -2147483648)
			ft_exit(ps, 0);
	}
	if (str[i] != '\0')
		ft_exit(ps, 0);
	if ((str[0] == '+' && str[1] == '\0') || \
		(str[0] == '-' && str[1] == '\0'))
		ft_exit(ps, 0);
	return (sayi * isaret);
}
