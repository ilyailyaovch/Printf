/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleoma <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:52:27 by pleoma            #+#    #+#             */
/*   Updated: 2021/11/12 23:52:27 by pleoma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
# include <stdio.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define RESET   "\x1b[0m"

int main(void)
{	
	//you can add any variable
	char			ch = 'Z';
	char 			*nul = NULL;
	char 			*b = "Hello qwerty";
	int				i = 21324;
	int				i2 = -21324;
	unsigned int	un = 0;
	unsigned int	un2 = 4294967295;
	char 			*p1 = &ch;
	char 			*p2 = NULL;
	
	printf("--------------------");
	printf(YELLOW "\nORIGINAL(on my pc):\n" RESET);
	printf(GREEN "MY PRINTF:\n" RESET);
	printf("--------------------\n");
	printf(YELLOW "-text with %%: a0a%%d\n" RESET);
	ft_printf(GREEN "-text with %%: a0a%%d\n" RESET);//
	printf("--------------------\n");
	printf(YELLOW "-char: %c\n" RESET, ch);
	ft_printf(GREEN "-char: %c\n" RESET , ch);//
	printf("--------------------\n");
	printf(YELLOW "-str: %s\n" RESET, b);
	ft_printf(GREEN "-str: %s\n" RESET, b);//
	printf(YELLOW "-str: %s\n" RESET, nul);
	ft_printf(GREEN "-str: %s\n" RESET, nul);//
	printf("--------------------\n");
	printf(YELLOW"-decimal: %d\n"RESET,i);
	ft_printf(GREEN"-decimal: %d\n"RESET,i);//
	printf("--------------------\n");
	printf(YELLOW"-integer(10): %i\n"RESET,i);
	ft_printf(GREEN"-integer(10): %i\n"RESET,i);//
	printf(YELLOW"-integer(10): %i\n"RESET,i2);
	ft_printf(GREEN"-integer(10): %i\n"RESET,i2);//
	printf("--------------------\n");
	printf(YELLOW"-unsigned_decimal: %u\n"RESET, un);
	ft_printf(GREEN"-unsigned_decimal: %u\n"RESET, un);//
	printf(YELLOW"-unsigned_decimal: %u\n"RESET, un2);
	ft_printf(GREEN"-unsigned_decimal: %u\n"RESET, un2);//
	printf("--------------------\n");
	printf(YELLOW"-hex_low(16): %x\n"RESET,i);
	ft_printf(GREEN"-hex_low(16): %x\n"RESET,i);//
	printf(YELLOW"--------------------\n");
	printf(YELLOW"-hex_upp(16): %X\n"RESET,i);
	ft_printf(GREEN"-hex_upp(16): %X\n"RESET,i);//
	printf("--------------------\n");
	printf(YELLOW"-point: %p\n"RESET,p1);
	ft_printf(GREEN"-point: %p\n"RESET,p1);//
	printf(YELLOW"-point: %p\n"RESET,p2);
	ft_printf(GREEN"-point: %p\n"RESET,p2);//
	printf("--------------------\n\n");
	return (0);
}