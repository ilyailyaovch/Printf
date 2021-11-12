/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:08:47 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/20 16:08:47 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h" 

int	ft_valid_arg(const char *str, int i, va_list argptr)
{
	if (str[i + 1] == '%')
		return (ft_putchar_l(str[i + 1]));
	else if (str[i + 1] == 'c')
		return (ft_putchar_l(va_arg(argptr, int)));
	else if (str[i + 1] == 's')
		return (ft_putstr_l(va_arg(argptr, char *)));
	else if ((str[i + 1] == 'd') || (str[i + 1] == 'i'))
		return (ft_putnbr_l(va_arg(argptr, int)));
	else if (str[i + 1] == 'u')
		return (ft_putnbr_unsigned_l(va_arg(argptr, unsigned int)));
	else if (str[i + 1] == 'x')
		return (ft_puthex_l(va_arg(argptr, int), "0123456789abcdef"));
	else if (str[i + 1] == 'X')
		return (ft_puthex_l(va_arg(argptr, int), "0123456789ABCDEF"));
	else if (str[i + 1] == 'p')
		return (ft_putpointer_l(va_arg(argptr, void *), "0123456789abcdef"));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list		argptr;
	size_t		i;
	size_t		len;

	i = 0;
	len = 0;
	va_start(argptr, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			len += ft_valid_arg(str, i, argptr);
			i++;
		}
		else
			len += ft_putchar_l(str[i]);
		i++;
	}
	va_end(argptr);
	return (len);
}
