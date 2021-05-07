/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 01:48:23 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/13 05:28:58 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_st_strlen(const char *s)
{
	unsigned char	i;

	i = 0u;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int				i;

	i = 0;
	if (!src || !dst)
		return (0);
	while (i + 1 < (int)dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < (int)dstsize)
		dst[i] = '\0';
	else if (i > (int)dstsize)
		dst[i - 1] = '\0';
	return (ft_st_strlen(src));
}
