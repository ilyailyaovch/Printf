/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:49:26 by pleoma            #+#    #+#             */
/*   Updated: 2021/11/10 15:49:26 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex_l(unsigned int num, char *base)
{
	char	*str;
	int		len;

	str = ft_htoa(num, base);
	len = ft_putstr_l(str);
	free(str);
	return (len);
}
