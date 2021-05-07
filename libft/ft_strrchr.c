/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 05:09:28 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/08 19:44:54 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*cc;

	cc = 0;
	while (*(s) != '\0')
	{
		if (*s == (char)c)
			cc = (char *)s;
		s++;
	}
	if ((char)c == '\0' && *(s) == '\0')
		cc = (char *)s;
	return (cc);
}