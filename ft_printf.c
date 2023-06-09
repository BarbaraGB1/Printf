/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:32:34 by bargarci          #+#    #+#             */
/*   Updated: 2023/06/08 21:32:45 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

/*%c Imprime un solo carácter[v].
  %s Imprime una string[v] (como se define por defecto en C).
  %p El puntero void * dado como argumento se imprime en formato hexadecimal.[v]
  %d Imprime un número decimal[v] (base 10).
  %i Imprime un entero en base 10.[v]
  %u Imprime un número decimal (base 10) sin signo.[f]
  %x Imprime un número hexadecimal (base 16) en minúsculas.[v]
  %X Imprime un número hexadecimal (base 16) en mayúsculas.[v]
  % % para imprimir el símbolo del porcentaje.*/
int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	len = 0;
	i = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_functions(str[i], args);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

int	ft_functions(char symbol, va_list args)
{
	if (symbol == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (symbol == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (symbol == 'd' || symbol == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (symbol == 'x')
		return (ft_put_hex(va_arg(args, unsigned int),
				"0123456789abcdef"));
	if (symbol == 'p')
		return (ft_putptr(va_arg(args, unsigned long long),
				"0123456789abcdef"));
	if (symbol == 'X')
		return (ft_put_hex(va_arg(args, unsigned int),
				"0123456789ABCDEF"));
	if (symbol == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int),
				"0123456789"));
	if (symbol == '%')
		return (ft_putchar('%'));
	return (1);
}
