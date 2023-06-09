#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	// int		count;
	// int		prueba;
	// void	*ptr;
	//
	// prueba = 10;
	// printf("%i",ft_printf(" %p %p \n", LONG_MIN, LONG_MAX));
	// printf("%i",printf(" %p %p ", LONG_MIN, LONG_MAX));
	// return (0);
	// ptr = &prueba;
	// count = ft_printf("Hello %c \n %d \n %s \n %x \n %X \n %p \n %u", 'A', 1234, "tonto", 2343544, 23434345, ptr, 0);
	// printf(" \n count %d", count);
	// // count = ft_printf("%p", ptr);
	// printf("Hello %c \n %d \n %s \n %x \n %X \n %p \n %u", 'A', 1234, "tonto", 2343544, 23434345, ptr, 0);
	//printf("%i", ft_printf("%p\n", NULL));
	//printf("%i", ft_printf("%p\n", NULL));
	printf("%i", ft_printf("%u", 0));
	return (0);
}
