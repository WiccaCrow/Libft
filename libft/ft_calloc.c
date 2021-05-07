/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:42:43 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/08 19:08:47 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_static_bzero(void *s, size_t n)
{
	while (n-- != 0)
		*(char *)s++ = 0;
}

void		*ft_calloc(size_t count, size_t size)
{
	void *call;

	if ((call = malloc(count * size)))
	{
		ft_static_bzero(call, count * size);
		return (call);
	}
	return (NULL);
}
