/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macar <macar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:31:37 by macar             #+#    #+#             */
/*   Updated: 2022/02/08 13:32:21 by macar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>

void	take_bit(int sig, siginfo_t *info, void *cnt);
void	send_bits(unsigned char c, pid_t pid);
void	kill_checker(pid_t pid, int sign);
int		ft_atoi(const char *str);
int		ft_printf(const char *s, ...);
int		ft_putchar_fd(char c);
int		ft_putnbr_fd(int n, int *s);
int		ft_putstr_fd(char *s);
#endif