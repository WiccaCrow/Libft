/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:58:58 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/20 17:21:20 by mdulcie          ###   ########.fr       */
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

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
	{
		if (!(substr = malloc(sizeof(char))))
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
