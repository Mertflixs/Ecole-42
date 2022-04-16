/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agunes <agunes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:07:22 by agunes            #+#    #+#             */
/*   Updated: 2022/04/16 17:07:25 by agunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	move(int keycode, t_list *main)
{
	if (keycode == 13 || keycode == 126)
		moveup(main);
	if (keycode == 1 || keycode == 125)
		movedown(main);
	if (keycode == 2 || keycode == 124)
		moveright(main);
	if (keycode == 0 || keycode == 123)
		moveleft(main);
	if (keycode == 53)
	{
		exit (0);
		return (0);
	}
	mlx_clear_window(main->mlx, main->win);
	putimage(main);
	printf("%d\n", main->movecount);
	if (main->movecount > 499)
	{
		printf("GAME OVER !\n");
		exit (0);
	}
	return (1);
}

int	bercheck(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (s[i - 1] != 'r' && s[i - 2] != 'e' && s[i - 3] != 'b' && \
		s[i - 4] != '.')
	{
		printf("Wrong file name!!\n");
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list	*main;

	if (ac == 2)
	{
		if (!bercheck(av[1]))
			return (0);
		main = malloc(sizeof(t_list));
		if (!(createmap(main, av[1])))
			return (0);
		mlx_hook(main->win, 2, 1L << 0, move, main);
		mlx_loop(main->mlx);
	}
	else
	{
		printf("Error\n");
		exit(0);
	}
}
