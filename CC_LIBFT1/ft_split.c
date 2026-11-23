/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:13:37 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/20 11:46:35 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	emergency_free(char **newstr, size_t j)
{
	size_t	i;

	i = j;
	while (i <= j)
	{
		free(newstr[i]);
		i--;
	}
	free(newstr);
}

size_t	move_to(char const *s, char c, size_t i, int value)
{
	if (value == 1)
	{
		while (s[i] && s[i] == c)
			i++;
	}
	else if (value == 2)
	{
		while (s[i] && s[i] != c)
			i++;
	}
	else
		return (i);
	return (i);
}

char	*get_cp(char *newstr, char const *s, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	newstr = ft_calloc((end - start) + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	while (start < end)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	**get_wl(char **newstr, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	start = 0;
	j = 0;
	while (s[i])
	{
		i = move_to(s, c, i, 1);
		start = i;
		i = move_to(s, c, i, 2);
		if (start < i)
		{
			newstr[j] = get_cp(newstr[j], s, start, i);
			if (!newstr)
			{
				emergency_free(newstr, j);
				return (NULL);
			}
		}
		j++;
	}
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;
	size_t	wc;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	wc = 0;
	while (s[i])
	{
		i = move_to(s, c, i, 1);
		if (s[i])
			wc++;
		i = move_to(s, c, i, 2);
	}
	newstr = ft_calloc(wc + 1, sizeof(char *));
	return (get_wl(newstr, s, c));
}
