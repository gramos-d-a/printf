/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:50:05 by gramos-d          #+#    #+#             */
/*   Updated: 2022/11/09 18:28:33 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_arg(char s, va_list arg)
{
	if (s == 'c')
		return (ft_printf_c(va_arg(arg, int)));
	else if (s == 's')
		return (ft_printf_s(va_arg(arg, char *)));
	else if (s == 'p')
		return (ft_put_p(va_arg(arg, size_t), "0123456789abcdef"));
	else if (s == 'd' || s == 'i')
		return (ft_putnbr_base(va_arg(arg, int), "0123456789", 10));
	else if (s == 'u')
		return (ft_putnbr_basen(va_arg(arg, unsigned int), "0123456789", 10));
	else if (s == 'x')
		return (ft_putnbr_base(va_arg(arg, unsigned int),
				"0123456789abcdef", 16));
	else if (s == 'X')
		return (ft_putnbr_base(va_arg(arg, unsigned int),
				"0123456789ABCDEF", 16));
	else if (s == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}
