/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramos-d <gramos-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:47:57 by gramos-d          #+#    #+#             */
/*   Updated: 2022/11/09 18:16:31 by gramos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *s, ...);
int	ft_printf_arg(char s, va_list arg);
int	ft_printf_c(int c);
int	ft_printf_s(char *s);
int	ft_putnbr_base(long nbr, char *base, int blen);
int	ft_put_p(size_t nbrn, char *base);
int	ft_putnbr_basen(size_t n, char *base, int bln);

#endif
