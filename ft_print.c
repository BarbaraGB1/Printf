/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:23:01 by bargarci          #+#    #+#             */
/*   Updated: 2023/06/01 22:47:04 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

/*%c Imprime un solo carácter[v].
  %s Imprime una string[v] (como se define por defecto en C).
  %p El puntero void * dado como argumento se imprime en formato hexadecimal.[f]
  %d Imprime un número decimal[v] (base 10).
  %i Imprime un entero en base 10.[v]
  %u Imprime un número decimal (base 10) sin signo.[f]
  %x Imprime un número hexadecimal (base 16) en minúsculas.[v]
  %X Imprime un número hexadecimal (base 16) en mayúsculas.[f]
  % % para imprimir el símbolo del porcentaje.*/


int ft_printf(char const *str, ...)
{
  va_list args;
  int i;
  int len;

  len = 0;
  i = 0;
  if (!str)
    return(0);
  va_start(args, str);
  while (str[i])
  {
  
    if(str[i] == '%')
    {
      i++;
      len += ft_functions(str[i], args);
    }
    else
      len += ft_putchar(str[i]);
    i++;
  }
  va_end(args);
  return(len);
}
int ft_functions(char symbol, va_list args)
{
  if (symbol == 'c')
    return(ft_putchar(va_arg(args, int)));
  if (symbol == 's')
    return(ft_putstr(va_arg(args, char *)));
  if (symbol == 'd' || symbol == 'i')
    return(ft_putnbr(va_arg(args, int)));
  if (symbol == 'x')
    return(ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
  if (symbol == 'X')
    return(ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
  return(0);
}
int ft_putnbr_base(unsigned int n, char *base)
{
  unsigned int len;

  len = ft_strlen(base);
   
	if (n >= len)
  {
		ft_putnbr_base(n / len, base);
		ft_putnbr_base(n % len, base);
	}
  else
    ft_putchar(base[n % len]);
  return(ft_lennbr_base(n, base));
}
int ft_lennbr_base(int n, char *base)
{
  int len;
  unsigned int x;

  x = ft_strlen(base);
  len = 0;
  
  while(n)
  {
    n /= x;
    len++;
  }
  return(len);
}
int	ft_putchar(char c)
{
	write (1, &c, 1);
  return(1);
}
int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return(0);
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
  return(i);
}
int ft_putnbr(int n)
{
  ft_putnbr2(n);
  return(ft_lennbr(n));

}
int ft_lennbr(int n)
{
  int len;

  len = 0;
  if(n <= 0)
  {
    n = -n;
    len++;
  }
  while(n)
  {
    n /= 10;
    len++;
  }
  return(len);
}
void	ft_putnbr2(int n)
{
  if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
  else if (n < 0)
	{
	  ft_putchar('-');
		n = -n;
		ft_putnbr(n);
	}
  else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
  else
    ft_putchar(n + '0');
}


int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
