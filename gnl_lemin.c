/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_lemin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:44:08 by rsaleh            #+#    #+#             */
/*   Updated: 2019/04/17 17:50:36 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

//GNL completer pour pouvoir identifier la premiere ligne, la salle start et la end
void	gnl_lemin(char **line)
{
	char	*o_line;

	while (1)
	{
		get_next_line(0, &o_line);
		if (o_line[0] != '#' || ft_strequ("##start", o_line) ||
				ft_strequ("##end", o_line))
		{
			*line = o_line;
			break;
		}
		free(o_line);
	}
}
