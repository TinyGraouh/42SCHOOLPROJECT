/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:38:03 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/20 11:52:35 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	length;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start || len <= 0)
		return (ft_calloc(1, sizeof(char)));
	length = ft_strlen(s + start);
	if (length > len)
		length = len;
	substring = ft_calloc(length + 1, sizeof(char));
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	return (substring);
}
