/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:42:03 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/20 11:43:53 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmps;
	char	*tmpd;

	tmps = (char *)src;
	tmpd = (char *)dest;
	i = 0;
	while (i < n)
	{
		tmpd[i] = tmps[i];
		i++;
	}
	return (dest);
}
