/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:27:20 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/08 19:18:18 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;

	d = (unsigned char*)dst;
	while ((unsigned char)*(char*)src != (unsigned char)c && n != 0)
	{
		*d++ = (unsigned char)*(char*)src++;
		n--;
	}
	if (n == 0)
		return (NULL);
	else
	{
		*d++ = (unsigned char)*(char*)src++;
		return (d);
	}
}
