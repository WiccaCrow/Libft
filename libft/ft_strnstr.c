/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:36:22 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/17 03:16:17 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0u;
	while (s1[i] != '\0' && i < n)
	{
		if (s2[i] == '\0' || s2[i] < s1[i])
			return (s1[i] - s2[i]);
		if (s2[i] > s1[i])
			return (s2[i] - s1[i]);
		i++;
	}
	return (s2[i] != '\0' && i < n ? s1[i] - s2[i] : 0);
}

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	s;

	i = -1;
	s = ft_strlen(needle);
	if (!s)
		return ((char*)haystack);
	while (*(haystack + ++i) != '\0' && (int)len-- >= s
			&& *(haystack + i + s - 1) != '\0')
		if (ft_strncmp((haystack + i), (needle), s) == 0)
			return ((char*)haystack + i);
	return (NULL);
}
