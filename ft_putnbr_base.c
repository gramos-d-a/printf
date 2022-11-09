/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:02:25 by gramos-d          #+#    #+#             */
/*   Updated: 2022/11/09 18:29:36 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_p(size_t nbrn, char *base)
{
	int	blen;

	blen = 16;
	if (!nbrn)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	return (ft_putnbr_basen(nbrn, base, blen) + 2);
}

int	ft_putnbr_basen(size_t n, char *base, int bln)
{
	int	c;

	c = 0;
	if (n / bln > 0)
		c = ft_putnbr_basen(n / bln, base, bln);
	ft_putchar_fd(base[n % bln], 1);
	c++;
	return (c);
}

int	ft_putnbr_base(long nbr, char *base, int blen)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		i++;
	}
	if (nbr / blen > 0)
		i += ft_putnbr_base(nbr / blen, base, blen);
	ft_putchar_fd(base[nbr % blen], 1);
	return (++i);
}
