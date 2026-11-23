/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:00:38 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/23 16:37:10 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	emergency_free(char *s1, char *s2, ssize_t rvalue)
{
    if (!s1 || !s2 || rvalue == -1)
	{
		free(s2);
		free(s1);
		return (1);
	}
	return (0);
}

char	*get_line(char *stash, char *str, ssize_t rvalue, int fd)
{
	int	i;	

	i = 0;
	while (get_strchr(stash, '\n') == 0 && rvalue > 0)
	{
		rvalue = read(fd, str, BUFFER_SIZE);
		stash = get_strjoin(stash, str);
		if (emergency_free(stash, str, rvalue) == 1)
			return (NULL);
		while (stash[i] != '\n' && stash[i])
			i++;
	}
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*lnstr;
	char		*str;
	ssize_t		rvalue;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!str)
		return (NULL);
	rvalue = 1;
	stash = get_line(stash, str, rvalue, fd);
	if (emergency_free(stash, str, rvalue) == 1)
		return (NULL);
	lnstr = get_str(stash);
	if (emergency_free(stash, str, rvalue) == 1)
	{
		free(lnstr);
		return (NULL);
	}
	stash = rm_str(stash);
	return (lnstr);
}
