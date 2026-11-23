/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:44:50 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/20 11:52:13 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	length;
	char	*newstr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	length = ft_strlen(s1);
	while (ft_strrchr(set, s1[length - 1]))
		length--;
	length = (length - start);
	newstr = ft_substr(s1, start, length);
	return (newstr);
}
