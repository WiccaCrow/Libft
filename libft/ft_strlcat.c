/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:06:35 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/10 17:39:10 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_st_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	size;
	size_t	i;

	i = ((ft_st_strlen(dst) > dstsize) ? dstsize + ft_st_strlen(src) :
			ft_st_strlen(dst) + ft_st_strlen(src));
	size = 1;
	if (*dst)
		while (*(dst++ + 1))
		{
			if (size < dstsize)
				size++;
			else
				break ;
			!*(dst + 1) ? size++ : 0;
		}
	if (size < dstsize)
		while (*src)
		{
			*dst++ = *src++;
			*dst = 0;
			if (++size == dstsize)
				break ;
		}
	return (i);
}
