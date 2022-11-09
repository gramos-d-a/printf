/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:19:22 by gramos-d          #+#    #+#             */
/*   Updated: 2022/11/09 16:07:10 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	arg;

	i = -1;
	count = 0;
	va_start(arg, s);
	while (s[++i])
	{
		if (s[i] == '%')
			count += ft_printf_arg(s[++i], arg);
		else if (++count)
			ft_putchar_fd(s[i], 1);
	}
	va_end(arg);
	return (count);
}
