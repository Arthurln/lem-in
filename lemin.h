/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:31:29 by rsaleh            #+#    #+#             */
/*   Updated: 2019/04/17 18:23:28 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

# include "libft/includes/libft.h"
# include "get_next_line.h"

typedef struct 	s_rooms
{
	char		**room_names;
	int			room_num;
	int			**paths;
	t_list		*room_list;
}				t_rooms;

int				get_ants(void);
void			gnl_lemin(char **line);
void			add_rooms_to_list(t_rooms **rooms, int *start, int *end);
void			add_link(t_rooms **rooms, char *l, int *start, int *end);
int				*get_room(int n);
int				add_new_room(t_room *rooms, char *line);
void			set_start_end(int *start, int *end, int room_num, int *mark);
t_rooms			*new_rooms(void);

#endif
