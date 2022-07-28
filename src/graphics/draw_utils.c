/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:20:51 by tbraquem          #+#    #+#             */
/*   Updated: 2022/06/14 11:21:35 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	pixel_put(t_img_data *img_data, int x, int y, int color)
{
	char	*dst;

	if (y >= WIN_H || x >= WIN_W)
		return ;
	if (y < 0 || x < 0)
		return ;
	dst = img_data->addr + (y * img_data->line_length + x
			* (img_data->bpp / 8));
	*(unsigned int *) dst = color;
}
