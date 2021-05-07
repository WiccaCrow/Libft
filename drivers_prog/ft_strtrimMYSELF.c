/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 22:58:58 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/11 00:18:57 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strchr(const char *s, int c)
{
	while (*(s) != (char)c)
		if (*(s++) == '\0')
			return (0);
	return ((char *)s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*t;
	
	if (!s1 || !set)
		return (NULL);
	if (!(trim = malloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	t = trim;
	while (*s1)
		{
			if (ft_strchr(set++, *s1))
					s1++;
			else 
				*trim++ = *s1++;
		}
	*trim = 0;
	return (t);
}
