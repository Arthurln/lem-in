/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 13:57:42 by rsaleh            #+#    #+#             */
/*   Updated: 2019/04/17 18:16:44 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "lemin.h"

void	delete_content(void *content, size_t content_size)
{
	free(content);
	content_size = 0;
}

int	main(void)
{
	int 	ants;
	int		start;
	int		end;
	t_rooms	*rooms;

	ants = get_ants();
	rooms = NULL;
	start = -1;
	end = -1;

	printf("nbants: %d", ants);
	return (0);
}
