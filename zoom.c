/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 00:12:01 by mrobinso          #+#    #+#             */
/*   Updated: 2017/04/10 04:53:05 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	zoom_in(int x, int y, t_info *this)
{
	x += 0;
	y += 0;
	mlx_clear_window(this->mlx->mlx, this->mlx->window);
	this->fractal->zoom *= ZOOM_FACTOR;
	draw(this);
}

void	zoom_out(int x, int y, t_info *this)
{
	x += 0;
	y += 0;
	mlx_clear_window(this->mlx->mlx, this->mlx->window);
	this->fractal->zoom /= ZOOM_FACTOR;
	draw(this);
}
