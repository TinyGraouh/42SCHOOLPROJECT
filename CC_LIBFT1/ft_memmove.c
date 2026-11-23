/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:02:45 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/20 11:44:08 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		tmp;
	const char	*tmps;
	char		*tmpd;
	size_t		i;

	tmps = (const char *)src;
	tmpd = (char *)dest;
	i = 0;
	if (tmpd < tmps)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		while (i < n)
		{
			tmp = tmps[(n - i) - 1];
			tmpd[n - i - 1] = tmp;
			i++;
		}
	}
	return (dest);
}
