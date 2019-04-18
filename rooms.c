/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rooms.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:36:46 by rsaleh            #+#    #+#             */
/*   Updated: 2019/04/17 18:19:32 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"


int		*get_room(int n)
{
	int	*r;
	int i;

	if (!(r = (int *)malloc(sizeof(int) * n)))
		return (NULL);
	i = -1;
	while (++i < n)
		r[i] = 0;
	return (r);
}

//Recupere le nom de la salle et l'ajoute a la liste de salle
int		add_new_room(t_rooms *rooms, char *line)
{
	char **str;

	str = ft_strsplit(line, ' ');
	//Gestion d'erreur a ajouter ici
	free(line);
	ft_lstadd(&(rooms->room_list), ft_lstnew(str[0], ft_strlen(str[0]) + 1));
	rooms->room_num++;
	return (rooms->room_num - 1);
}

//Sers a definir la salle de debut et de fin
void	set_start_end(int *start, int *end, int room_num, int *mark)
{
	if (*mark == 1)
		*start = room_num;
	else if (*mark == 2)
		*end = room_num;
	*mark = 0;
}

//Initialise une nouvelles salles
t_rooms	*new_rooms(void)
{
	t_rooms *room;

	if (!(room = (t_rooms *)malloc(sizeof(t_rooms))))
		return (NULL);
	room->paths = NULL;
	room->room_num = 0;
	room->room_names = NULL;
	room->room_list = NULL;
	return (room);
}

//Ajoute une nouvelle salle et definis les tubes
void	add_rooms(t_rooms **rooms, int *start, int *end)
{
	char	*line;
	int		mark;

	mark = 0;
	*rooms = new_rooms();
	while (1)
	{
		gnl_lemin(&line);
		if (ft_strchr(line, '-') != NULL)
		{
			add_link(rooms, line, start, end);
			break;
		}
		if (ft_strequ("##start", line))
			mark = free_return(line, 1);
		else if (ft_strequ("##end", line))
			mark = free_return(line, 2);
		else
			set_start_end(start, end, add_new_room(*rooms, line), &mark);
	}
}
