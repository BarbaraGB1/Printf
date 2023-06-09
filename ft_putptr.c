/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 02:05:41 by bargarci          #+#    #+#             */
/*   Updated: 2023/06/09 02:05:46 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putptr(unsigned long long n, char *base)
{
	ft_putstr("0x");
	if (n == 0)
		return (ft_putchar('0') + 2);
	else
		ft_putnbr_base_hex(n, base);
	return (ft_lennbr_base_hex(n) + 2);
}

int	ft_lennbr_base_hex(unsigned long long n)
{
	unsigned long	len;
	unsigned long	x;

	x = 16;
	len = 0;
	while (n)
	{
		n /= x;
		len++;
	}
	if (len == 0)
		len++;
	return (len);
}

int	ft_putnbr_base_hex(unsigned long long n, char *base)
{
	unsigned long	len;

	len = ft_strlen(base);
	if (n >= len)
	{
		ft_putnbr_base_hex(n / len, base);
		ft_putchar(base[n % len]);
	}
	else
		ft_putchar(base[n % len]);
	return (0);
}
