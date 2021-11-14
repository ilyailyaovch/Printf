/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:50:56 by pleoma            #+#    #+#             */
/*   Updated: 2021/11/10 12:50:56 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_l(int num)
{
	char	*s;
	int		len_s;

	s = ft_itoa(num);
	len_s = ft_putstr_l(s);
	free(s);
	return (len_s);
}
