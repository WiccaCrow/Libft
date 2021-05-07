/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:00:11 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/08 19:23:54 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (dst == 0 && src == 0)
		return ((void *)dst);
	while (n-- > 0)
		((char *)dst)[n] = ((char *)src)[n];
	return ((void *)dst);
}
