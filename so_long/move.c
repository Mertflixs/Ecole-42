/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 13:42:09 by agunes            #+#    #+#             */
/*   Updated: 2022/04/18 13:22:44 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	moveup(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex - main->slen - 1] != '1' \
		&& main->map[main->pindex - main->slen - 1] == '0')
	{
		main->map[main->pindex - main->slen - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex - main->slen - 1] == 'C')
	{
		main->map[main->pindex - main->slen - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex - main->slen - 1] == 'E' && main->cc == 0)
	{
		ft_printf("%sTebrikler oyunu %d adımda bitirdiniz.", "\x1B[31m", \
		main->movecount + 2);
		exit(0);
	}
}

void	movedown(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex + main->slen + 1] != '1' \
		&& main->map[main->pindex + main->slen + 1] == '0')
	{
		main->map[main->pindex + main->slen + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex + main->slen + 1] == 'C')
	{
		main->map[main->pindex + main->slen + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex + main->slen + 1] == 'E' && main->cc == 0)
	{
		ft_printf("%sTebrikler oyunu %d adımda bitirdiniz.", "\x1B[31m", \
		main->movecount + 2);
		exit(0);
	}
}

void	moveright(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex + 1] != '1' \
		&& main->map[main->pindex + 1] == '0')
	{
		main->map[main->pindex + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex + 1] == 'C')
	{
		main->map[main->pindex + 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex + 1] == 'E' && main->cc == 0)
	{
		ft_printf("%sTebrikler oyunu %d adımda bitirdiniz.", "\x1B[31m", \
		main->movecount + 2);
		exit(0);
	}
}

void	moveleft(t_list *main)
{
	checkarray(main);
	if (main->map[main->pindex - 1] != '1' \
		&& main->map[main->pindex - 1] == '0')
	{
		main->map[main->pindex - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex - 1] == 'C')
	{
		main->map[main->pindex - 1] = 'P';
		main->map[main->pindex] = '0';
		main->movecount++;
	}
	if (main->map[main->pindex - 1] == 'E' && main->cc == 0)
	{
		ft_printf("%sTebrikler oyunu %d adımda bitirdiniz.", "\x1B[31m", \
		main->movecount + 2);
		exit(0);
	}
}
