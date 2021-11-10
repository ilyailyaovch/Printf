/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_l.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:58:32 by pleoma            #+#    #+#             */
/*   Updated: 2021/11/10 13:58:32 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_unsigned_l(unsigned int num)
{
	char	*str;
	int		len;

	str = ft_utoa(num);
	len = ft_putstr_l(str);
	free(str);
	return (len);
}
