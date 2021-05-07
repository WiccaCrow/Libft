/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 23:06:35 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/02 23:06:40 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t   ft_st_strlen(const char *s)
{
    unsigned char	i;

    i = 0u;
    while (s[i] != '\0')
        i++;
    return i;
}

size_t  ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    int     i;
    int     j;
    size_t  d;

    i = 0;
    j = 0;
    d = ft_st_strlen(dst);
    while (dst[j] != '\0')
        j++;
    while (i < (dstsize - d - 1) && src[i] != '\0')
    {
        dst[j + i] = src[i];
        i++;
    }
    if (i < (dstsize - d))
        dst[j + i] = '\0';
    else
        dst[j + i - 1] = '\0';
    return ft_st_strlen(src) + d;
}