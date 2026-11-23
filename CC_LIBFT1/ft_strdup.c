/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:13:19 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/20 11:47:26 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	length;

	length = ft_strlen(s);
	dup = ft_calloc(length + 1, (sizeof(char)));
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s, length);
	return (dup);
}
