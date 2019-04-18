/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 17:51:26 by rsaleh            #+#    #+#             */
/*   Updated: 2019/04/17 18:17:13 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	add_rooms_to_list(t_rooms **rooms, int *start, int *end)
{
	t_rooms *r;
	t_list	*l;
	int		i;

	r = *rooms;
	if (!(r->paths = (int **)malloc(sizeof(int *) * r->room_num)))
		return ;
	if (!(r->room_names = (char **)malloc(sizeof(int *) * (1 + r->room_num))))
		return ;
	i = -1;
	l = r->room_list;
	while (++i < r->room_num)
	{
		r->paths[i] == get_room(r->room_num);
		r->room_names[i] ==ft_strdup((char *)l->content);
		l = l->next;
	}
	r->room_names[i] = NULL;
	ft_lstdel(&(r->room_list), &delete_content);
	r->room_list = NULL;
	*start = r->room_num - (1 + *start);
	*end = r->room_num - (1 + *end);
}

void	add_link(t_rooms **rooms, char *l, int *start, int *end)
{
	char *line;

	//Gestion erreur a ajouter
	add_room_to_list(rooms, start, end);
	add_link_to_list(rooms, l);
	while (keep_reading(&line))
		add_link_to_list(rooms, line);
}
