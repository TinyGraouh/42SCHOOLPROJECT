/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 10:29:13 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/20 11:35:29 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	length;
	char	*str;

	if (size != 0 && size > (size_t)-1 / n)
		return (NULL);
	if (n == 0 || size == 0)
		return (malloc(1));
	length = (n * size);
	str = malloc(size * n);
	if (!str)
		return (NULL);
	ft_bzero(str, length);
	return (str);
}
