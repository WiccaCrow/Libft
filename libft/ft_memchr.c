/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 15:41:48 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/17 03:45:57 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n != 0)
	{
		if (n != 0 && *((unsigned char*)s) == (unsigned char)c)
			return ((void *)s);
		--n;
		++s;
	}
	return (NULL);
}
