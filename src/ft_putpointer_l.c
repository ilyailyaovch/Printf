/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer_l.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:26:58 by pleoma            #+#    #+#             */
/*   Updated: 2021/11/10 16:26:58 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putpointer_l(void *ptr, char *base)
{
	unsigned int					len;
	char							*str;
	unsigned long long int			n;

	if (!ptr)
		return (ft_putstr_l("(nil)"));
	n = (unsigned long long int) ptr;
	str = ft_htoa(n, base);
	len = ft_putstr_l("0x") + ft_putstr_l(str);
	free(str);
	return (len);
}
