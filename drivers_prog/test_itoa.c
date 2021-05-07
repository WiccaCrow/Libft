/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 20:40:03 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/12 20:40:07 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		c;

	i = 1;
	c = n;
	while ((c /= 10))
		i++;
	n < 0 ? i++ : 0;
	s = (char *)malloc(sizeof(char) * ++i);
	
	s[--i] = 0;
	while (--i >= 0 && n != 0)
	{
		if (n < 0)
		{
			n = -n;
			s[0] = '-';
		}
		int test = n % 10;
		s[i] = n % 10 + '0';
		n /= 10;
	}
	return (s);
}

int	main()
{
	int	num = -120
		;
	char *s;

	s = ft_itoa(num);
	printf("%s**\n", s);
	return 0;
}
