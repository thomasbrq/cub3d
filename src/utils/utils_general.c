/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_general.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:31:27 by tbraquem          #+#    #+#             */
/*   Updated: 2022/06/14 11:32:47 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	print_error(char *message, int num_error)
{
	perror(message);
	strerror(num_error);
}

void	remove_nl(char *string)
{
	int		i;

	i = 0;
	while (string[i])
	{
		if (string[i] == '\n')
			string[i] = 0;
		i++;
	}
}

void	clear_screen(t_datas *big_data)
{
	mlx_destroy_image(big_data->mlx_data->mlx, big_data->img_data->img);
	big_data->img_data->img = mlx_new_image(big_data->mlx_data->mlx,
			WIN_W, WIN_H);
}
