/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 01:48:23 by mdulcie           #+#    #+#             */
/*   Updated: 2020/10/30 01:48:26 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static void ft_put_warning(int j)
{
    int i;
    char s1[] = "WARNING!!! The size of the destination buffer is set too large. Only the first ";
    char s2[] = " characters will be copied.";
    char c_j;

    i = 0;
    c_j = j + '0';
    while (s1[i] != '\0')
        write(1, &s1[i++], 1);
    write(1,&c_j, 1);
    i = 0;
    while (s2[i] != '\0')
        write(1, &s2[i++], 1);
    write(1,"\n", 1);
}

static size_t   ft_strsizelen(const char *s)
{
    size_t	i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

size_t  ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
    int     i;

    i = 0;
    if (dstsize > ft_strsizelen(dst) + 1)
    {
        dstsize = ft_strsizelen(dst) + 1;
      ft_put_warning(dstsize - 1);
    }
    while (i < dstsize && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    if (i < dstsize)
        dst[i] = '\0';
    else
        dst[i - 1] = '\0';
    return ft_strsizelen(src);
}