/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:09:14 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/08 19:27:41 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == 0 && src == 0)
		return (dst);
	while (len-- > 0)
		if ((char *)src < (char *)dst)
			*(char *)(dst + len) = *(char *)(src + len);
		else
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	return (dst);
}
