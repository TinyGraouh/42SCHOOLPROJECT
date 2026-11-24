/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:44:47 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/20 11:47:03 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	length;
	char	*str;

	str = (char *)s;
	length = ft_strlen(s);
	i = 0;
	if (c > 256)
		c -= 256;
	while (i <= length)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}
