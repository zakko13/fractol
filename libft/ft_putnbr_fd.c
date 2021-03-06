/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahryniv <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:49:16 by ahryniv           #+#    #+#             */
/*   Updated: 2016/12/05 18:09:14 by ahryniv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int		b;
	char	c;

	b = nb;
	if (b == (-2147483648))
		nb = (-214748364);
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		c = nb % 10 + '0';
		write(fd, &c, 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(fd, &c, 1);
	}
	if (b == (-2147483648))
		write(fd, "8", 1);
}
