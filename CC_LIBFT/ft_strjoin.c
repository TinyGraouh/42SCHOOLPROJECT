/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etpauper <etpauper@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 10:08:56 by etpauper          #+#    #+#             */
/*   Updated: 2026/11/20 11:47:54 by etpauper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*newstr;

	if (!s1 && !s2)
		return (NULL);
	newstr = ft_calloc(((ft_strlen(s1) + ft_strlen(s2)) + 1), sizeof(char));
	i = -1;
	while (s1[++i])
		newstr[i] = s1[i];
	j = -1;
	while (s2[++j])
		newstr[i + j] = s2[j];
	newstr[i + j] = '\0';
	return (newstr);
}
