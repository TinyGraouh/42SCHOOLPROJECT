/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 16:02:30 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/23 16:39:12 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	get_len(char *str)
{
	size_t	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*rm_str(char *stash)
{
	char	*new_str;
	int	i;
	int	j;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash)
		new_str = malloc(sizeof(char));
	else
		new_str = malloc(sizeof(char) * (get_len(stash + i) + 1));
	j = 0;
	while (stash[i])
	{
		new_str[j] = stash[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
}

char	*get_strjoin(char *s1, char *s2)
{
	char	*strj;
	int	i;
	int	j;

	if (!s1 || !s2)
		return (NULL);
	strj = malloc(sizeof(char) * ((get_len(s1) + get_len(s2)) + 1));
	if (!strj)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		strj[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		strj[i + j] = s2[j];
		j++;
	}
	strj[i + j] = '\0';
	return (strj);
}

int	get_strchr(char *stash, char c)
{
	int	i;

	if (!stash)
		return (0);
	i = 0;
	while (stash[i] && stash[i] != c)
		i++;
	if (stash[i] == '\n')
		return (1);
	return (0);
}

char	*get_str(char *stash)
{
	int	i;
	int	length;
	char	*str;

	if (!stash)
		return (NULL);
	length = 0;
	while (stash[length] && stash[length] != '\n')
		length++;
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (stash[i] && i <= length)
	{
		str[i] = stash[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
