/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 02:05:12 by bargarci          #+#    #+#             */
/*   Updated: 2023/06/09 02:05:17 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <limits.h>

int	ft_putnbr_base(unsigned int n, char *base)
{
	unsigned long	len;

	len = ft_strlen(base);
	if (n >= len)
	{
		ft_putnbr_base(n / len, base);
		ft_putchar(base[n % len]);
	}
	else
		ft_putchar(base[n % len]);
	return (0);
}

int	ft_lennbr_base(unsigned long long n, char *base)
{
	unsigned long	len;
	unsigned long	x;

	x = ft_strlen(base);
	len = 0;
	while (n != 0)
	{
		len++;
		n /= x;
	}
	return (len);
}

int	ft_put_hex(unsigned int n, char *base)
{
	if (n == 0)
		return (ft_putchar('0'));
	else
		ft_putnbr_base(n, base);
	return (ft_lennbr_base(n, base));
}
