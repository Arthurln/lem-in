/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaleh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:09:24 by rsaleh            #+#    #+#             */
/*   Updated: 2018/11/23 14:55:04 by rsaleh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4096
# include "libft/includes/libft.h"

int	get_next_line(const int fd, char **line);

#endif
