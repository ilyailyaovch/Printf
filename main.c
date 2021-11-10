#include "includes/ft_printf.h"
# include <stdio.h> //no need later

#define RED   "\x1B[31m"
#define RESET "\x1B[0m"


int main(void)
{	
	char			 ch = 'Z';
	//char 			*b = NULL;
	char 			*b = "Hello qwerty 1!";
	int				i = 22;
	unsigned int	un = 2147483649;
	char 			*p = &ch;

	printf("\nORIGINAL:\n");
	printf("--------------------\n");
	printf("-text with %%: a0a%%d\n");
	printf("-char: %c\n", ch);
	printf("-str: %s\n",b);
	printf("-decimal: %d\n",i);
	printf("-integer(10): %i\n",i);
	printf("-unsigned_decimal: %u\n", un);
	printf("-hex_low(16): %x\n",i);
	printf("-hex_upp(16): %X\n",i);
	printf("-point: %p\n",p);
	printf("--------------------\n\n");

	printf("MY PRINTF:\n");
	printf("--------------------\n");
	ft_printf("-text with %%: a0a%%d\n");
	ft_printf("-char: %c\n", ch);
	ft_printf("-str: %s\n",b);
	ft_printf("-decimal: %d\n",i);
	ft_printf("-integer(10): %i\n",i);
	ft_printf("-unsigned_decimal: %u\n", un);
	ft_printf("-hex_low(16): %x\n",i);
	ft_printf("-hex_upp(16): %X\n",i);
	ft_printf("-point: %p\n",&ch);
	printf("--------------------\n");
	
	return (0);
}