/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdulcie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 02:59:03 by mdulcie           #+#    #+#             */
/*   Updated: 2020/11/14 19:44:58 by mdulcie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int		i;
	unsigned int	u_n;
	char			c_num;

	i = 1;
	n == 0 ? write(fd, "0", 1) : 0;
	if (n < 0)
		write(fd, "-", 1);
	u_n = n < 0 ? -n : n;
	while (n / i)
		i *= 10;
	while (i /= 10)
	{
		c_num = u_n / i + '0';
		u_n = u_n % i;
		write(fd, &c_num, 1);
	}
}
