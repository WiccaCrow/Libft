/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:58:58 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/10 22:11:38 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int    ft_strlen(const char *s)
{
    int    i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

char        *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;

    if (!s || start > (unsigned int)ft_strlen(s) + 1)
        return (NULL);
    if (start == (unsigned int)ft_strlen(s) + 1)
    {
        if(!(substr = malloc(sizeof(char))))
            return (NULL);
        *substr = '\0';
        return (substr);
    }
    if (!(substr = malloc((len + 1) * sizeof(char))))
        return (NULL);
    substr[len] = 0;
    while (len-- && *s && start < (unsigned int)ft_strlen(s))
        substr[len] = s[start + len];
    return (substr);
}

int main()
{
/*  char str[] = "lorem ipsum dolor sit amet";
  char *ss;
ss = ft_substr(str, 400, 20);
*/
    char *str = "01234";
    size_t size = 10;
    char *ret = ft_substr(str, 10, size);
  return 0;
}
