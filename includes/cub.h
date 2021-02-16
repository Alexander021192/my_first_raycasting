/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocalamar <ocalamar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:00:10 by alexandr          #+#    #+#             */
/*   Updated: 2021/02/16 17:00:09 by ocalamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

#define SCALE 16 // условный размер каждого квадратика в карте
#define SPEED 0.5

# define KEY_1			18
# define KEY_2			19
# define KEY_3			20
# define KEY_4			21
# define KEY_Q			12
# define KEY_W			13
# define KEY_E			14
# define KEY_R			15
# define KEY_A			0
# define KEY_S			1
# define KEY_D			2
# define KEY_I			34
# define KEY_O			31
# define KEY_P			35
# define KEY_J			38
# define KEY_K			40
# define KEY_L			37
# define KEY_LEFT		123
# define KEY_RIGHT		124
# define KEY_FORWARD 	126
# define KEY_BACKWARD	125
# define KEY_ESC		53

# include <math.h>

typedef struct	s_point // структура для точки
{
	double			x;
	double			y;
}				  t_point;

typedef struct	s_image
{
	void	*img;
	void	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}				t_image;

typedef	struct	s_win //структура для окна
{
	void		*ptr;
	void		*win;
	t_image		screen;
}				t_win;


typedef struct	s_plr //структура для игрока и луча
{
	int			dir;
	t_point		pos;

}				t_plr;

typedef	struct		s_tex
{
	char	*resolution;
	char	*n_textures;
	char	*s_textures;
	char	*w_textures;
	char	*e_textures;
	char	*sprt_textures;
	char	*flr_textures;
	char	*cl_textures;
}					t_tex;

typedef struct	s_all // структура для всего вместе
{
	t_win		win;
	t_plr		plr;
	t_image		screen;
	t_tex		*tex;
	t_point		x_move;
	t_point		y_move;
	t_point		rotate;
	char		**map_arr;
}				t_all;

t_tex				g_tex;

char	**ft_read_map(void);

#endif