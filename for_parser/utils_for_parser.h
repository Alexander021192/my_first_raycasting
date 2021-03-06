/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_for_parser.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandr <alexandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:00:10 by alexandr          #+#    #+#             */
/*   Updated: 2021/03/12 17:49:46 by alexandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

#define MAP_SCALE 1 // условный размер карты от основного экрана
#define SPEED 0.05

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
# include <stdlib.h>

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
	double		dir;
	t_point		pos;

}				t_plr;

typedef struct s_ray
{
	double	dir;
	double	len_ray;
	int		num_ray;
	int		side;
	t_point	side_dist;
	t_point	delta_dist;
	t_point	step;
	t_point	pos;
}				t_ray;

typedef struct	s_sprite
{
	double			dir;
	double			dist;
	t_point			size;
	t_point			pos;
	struct s_sprite	*next;
}				t_sprite;


typedef struct	s_tex
{
	char	*path;
	void	*tex;
	void	*ptr;
	t_point	start;
	t_point	end;
	int		width;
	int		height;
	int		bpp;
	int		size_line;
	int		endian;
}				t_tex;

typedef	struct		s_tex_char
{
	char	*resolution;
	char	*n_textures;
	char	*s_textures;
	char	*w_textures;
	char	*e_textures;
	char	*sprt_textures;
	char	*flr_textures;
	char	*cl_textures;
}					t_tex_char;

typedef struct	s_all // структура для всего вместе
{
	t_win		win;
	t_plr		plr;
	t_image		screen;
	t_tex_char	*tex_char;
	t_tex		tex[5];
	t_point		x_move;
	t_point		y_move;
	t_point		rotate;
	t_point		map_size; // need i?
	char		**map_arr;
	int			win_width;
	int			win_height;
	int			floor_color;
	int			ceil_color;
}				t_all;

t_tex_char				g_tex_char;



#endif