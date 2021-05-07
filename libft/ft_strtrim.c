/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 22:58:58 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/11 01:45:08 by mdulcie          ###   ########.fr       */
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

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*final;
	int		f;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	if ((f = ft_strlen(s1)))
		while (ft_strchr(set, s1[f - 1]) && &s1[f - 1] != s1)
			f--;
	final = (char *)&s1[f];
	if (!(trim = malloc((f + 1) * sizeof(char))))
		return (NULL);
	while (*s1 && final != s1)
		*trim++ = *s1++;
	*trim = 0;
	return (trim - f);
}
