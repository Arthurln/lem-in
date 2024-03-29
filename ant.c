/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ant.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 14:09:05 by rsaleh            #+#    #+#             */
/*   Updated: 2019/04/17 15:36:24 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int	get_ants(void)
{
	int		nb_ants;
	char	*line;

	gnl_lemin(&line);
	nb_ants = ft_atoi(line);
	free(line);
	return (nb_ants);
}
