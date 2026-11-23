/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 09:59:26 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/20 11:38:53 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	i_length(long n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		length++;
	}
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		i;
	int		length;
	long	nbr;
	char	*newstr;

	nbr = n;
	length = i_length(nbr);
	newstr = ft_calloc(length + 1, sizeof(char));
	if (!newstr)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		newstr[0] = '-';
		i++;
	}
	while (i < length)
	{
		newstr[length - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		length--;
	}
	return (newstr);
}
