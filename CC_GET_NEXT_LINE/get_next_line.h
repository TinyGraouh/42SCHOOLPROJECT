/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:03:14 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/23 16:38:31 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef	BUFFER_SIZE
# define BUFFER_SIZE 1024
# endif

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char	*get_next_line(int fd);
size_t	get_len(char *str);
char	*get_strjoin(char *s1, char *s2);
int		emergency_free(char *s1, char *s2, ssize_t rvalue);
char	*get_str(char *str);
char	*get_line(char *stash, char *str, ssize_t rvalue, int fd);
char	*rm_str(char *stash);
int	get_strchr(char *stash, char c);

# endif
