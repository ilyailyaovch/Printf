/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_l.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:37:04 by pleoma            #+#    #+#             */
/*   Updated: 2021/11/10 12:37:04 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr_l(char *s)
{
	int	coun;

	coun = 0;
	if (!s)
		return (ft_putstr_l("(null)"));
	while (s[coun])
	{
		ft_putchar_l(s[coun]);
		coun++;
	}
	return (coun);
}
