/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:42:06 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/12 13:42:08 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_len_str(char const *s, char c)
{
	int	i;
	int	j;
	int	len;
	int	maxlen;

	i = 0;
	maxlen = 0;
	j = 0;
	int *len_str;
	if (!(len_str = (int *)malloc(2 * sizeof(int))))
        return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
			s[i] ? j++ : 0;
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			i += len;
			(len > maxlen) ? maxlen = len : 0;
	}
	len_str[0] = maxlen;
	len_str[1] = j;
	return (&len_str[0]);
}

char	**ft_malloc_split(char **massstr, int str, int len)
{
	int	i;

	i = 0;
	if (!(massstr = (char**)malloc(str*sizeof(char*))))
		return (NULL);
	while (str--)
		if (!(massstr[i++] = (char*)malloc((len + 1)*sizeof(char))))
		{
			while (i)
				free(massstr[i--]);
			free(massstr);
			return (NULL);
		}
	return (massstr);
}

char	**ft_split(char const *s, char c)
{
	char	**massstr;
	int		*len_str;
	int		i;
	int		count;

	if (!s)
		return (NULL);
  massstr = NULL;
  i = 0;
  len_str = ft_len_str(s, c);
	while (s[i] && s[i] == c)
		i++;
	massstr = ft_malloc_split(massstr, *(len_str + 1), *len_str);
	while (s[i] && massstr)
	{
		count = 0;
		while (s[i] && s[i] != c && count++ <= i)
			*(*massstr)++ = s[i++];
		s[i] ? *(*massstr) = 0: 0;
		*massstr -= count;
		while (s[i] && s[i] == c)
			i++;
			s[i] != '\0' ? massstr++ : 0;
	}
	massstr -= *(len_str + 1) - 1;
	return(massstr);
}
