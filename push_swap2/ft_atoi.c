/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:12:36 by agunes            #+#    #+#             */
/*   Updated: 2022/05/27 18:45:19 by agunes           ###   ########.fr       */
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
	if (str[i] == '-')
		isaret -= (str[i++] == '-') * 2;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sayi = (sayi * 10) + str[i] - '0';
		i++;
		if (sayi * isaret > 2147483647)
			ft_exit(ps);
		if (sayi * isaret < -2147483648)
			ft_exit(ps);
	}
	if (str[i] != '\0')
		ft_exit(ps);
	return (sayi * isaret);
}
