/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 09:50:52 by pleoma            #+#    #+#             */
/*   Updated: 2021/10/31 09:50:52 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_valid_arg(const char *str, int i, va_list argptr);

int	ft_putchar_l(char s);
int	ft_putstr_l(char *s);
int	ft_putnbr_l(int num);
int	ft_putnbr_unsigned_l(unsigned int num);
int	ft_puthex_l(unsigned int num, char *base);
int	ft_putpointer_l(void *ptr, char *base);

#endif