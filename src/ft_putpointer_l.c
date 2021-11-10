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
	unsigned int			len;
	char					*str;
	unsigned long long int	n;

	n = (unsigned long long int) ptr;
	len = 0;
	str = ft_htoa(n, base);
	len = ft_putstr_l(str);
	free(str);
	return (len);
}
