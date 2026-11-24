/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:00:54 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/20 11:48:09 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlength;

	if (!src || !dst || size == 0)
		return (ft_strlen(src));
	dstlength = ft_strlen(dst);
	if (dstlength > size)
		dstlength = size;
	i = 0;
	while (src[i] && (i + dstlength) < size - 1)
	{
		dst[dstlength + i] = src[i];
		i++;
	}
	if ((i + dstlength) == (size - 1))
		dst[dstlength + i] = '\0';
	return (dstlength + ft_strlen(src));
}
