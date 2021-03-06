/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandr <alexandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:02:58 by ocalamar          #+#    #+#             */
/*   Updated: 2021/03/17 13:21:31 by alexandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# define MAP(y,x) map[(int)y][(int)x]
# define MAX(x, y) ((x > y) ? x : y)
# define ABS(x)	((x > 0) ? x : -x)

int			ft_init_textures(t_all *all);
char		**ft_read_map(t_all *all, char **argv);
int			check_map(char **map);
void		update_screen(t_all *all);
int			key_press(int keycode, t_all *all);
int			key_release(int keycode, t_all *all);
int			y_update_pos(t_all *all, int flag);
int			x_update_pos(t_all *all, int flag);
int			rotate_camera(t_all *all, int flag);
int			main_loop(t_all *all);
void		set_pos(t_point *pos, double x, double y);
void		my_mlx_pixel_put(t_image *img, int x, int y, int color);
void		ft_draw_my_pixel(t_all *all, t_point point,
			t_point pxl_size, int color);
int			ft_init_player(t_all *all);
int			ft_draw_map(t_all *all);
int			ft_draw_player(t_all *all);
int			ft_draw_back(t_all *all);
int			load_tex(t_all *all, t_tex *tex, char *path);
int			ft_draw_sprite(t_all *all, t_sprite *sprite, double arr_len_ray[]);
t_sprite	*ft_sort_list(t_sprite *root);
void		ft_init_map_size(t_all *all);

#endif
