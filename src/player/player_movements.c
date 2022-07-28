/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_movements.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:17:32 by tbraquem          #+#    #+#             */
/*   Updated: 2022/06/14 11:30:43 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	player_up(t_datas *data)
{
	int	x;
	int	y;

	y = (int)(data->vars_game->player_y / SQUARE_SIZE);
	x = (int)((data->vars_game->player_x + data->vars_game->player_dx * 5)
			/ SQUARE_SIZE);
	if (data->vars_game->map[y][x] == 0)
		data->vars_game->player_x += data->vars_game->player_dx;
	y = (int)((data->vars_game->player_y + data->vars_game->player_dy * 5)
			/ SQUARE_SIZE);
	x = (int)(data->vars_game->player_x / SQUARE_SIZE);
	if (data->vars_game->map[y][x] == 0)
		data->vars_game->player_y += data->vars_game->player_dy;
}

void	player_down(t_datas *data)
{
	int	x;
	int	y;

	y = (int)(data->vars_game->player_y / SQUARE_SIZE);
	x = (int)((data->vars_game->player_x - data->vars_game->player_dx * 5)
			/ SQUARE_SIZE);
	if (data->vars_game->map[y][x] == 0)
		data->vars_game->player_x -= data->vars_game->player_dx;
	y = (int)((data->vars_game->player_y - data->vars_game->player_dy * 5)
			/ SQUARE_SIZE);
	x = (int)(data->vars_game->player_x / SQUARE_SIZE);
	if (data->vars_game->map[y][x] == 0)
		data->vars_game->player_y -= data->vars_game->player_dy;
}

void	player_left(t_datas *data)
{
	int	x;
	int	y;

	y = (int)(data->vars_game->player_y / SQUARE_SIZE);
	x = (int)((data->vars_game->player_x + data->vars_game->player_dy * 5)
			/ SQUARE_SIZE);
	if (data->vars_game->map[y][x] == 0)
		data->vars_game->player_x += data->vars_game->player_dy;
	y = (int)((data->vars_game->player_y - data->vars_game->player_dx * 5)
			/ SQUARE_SIZE);
	x = (int)(data->vars_game->player_x / SQUARE_SIZE);
	if (data->vars_game->map[y][x] == 0)
		data->vars_game->player_y -= data->vars_game->player_dx;
}

void	player_right(t_datas *data)
{
	int	x;
	int	y;

	y = (int)(data->vars_game->player_y / SQUARE_SIZE);
	x = (int)((data->vars_game->player_x - data->vars_game->player_dy * 5)
			/ SQUARE_SIZE);
	if (data->vars_game->map[y][x] == 0)
		data->vars_game->player_x -= data->vars_game->player_dy;
	y = (int)((data->vars_game->player_y + data->vars_game->player_dx * 5)
			/ SQUARE_SIZE);
	x = (int)(data->vars_game->player_x / SQUARE_SIZE);
	if (data->vars_game->map[y][x] == 0)
		data->vars_game->player_y += data->vars_game->player_dx;
}
