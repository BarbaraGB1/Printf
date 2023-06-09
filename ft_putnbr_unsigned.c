/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 02:05:27 by bargarci          #+#    #+#             */
/*   Updated: 2023/06/09 02:05:31 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, char *base)
{
	unsigned int	len;

	if (n == 0)
		return (write(1, "0", 1), 1);
	len = ft_strlen(base);
	if (n >= len)
	{
		ft_putnbr_unsigned(n / len, base);
		ft_putnbr_unsigned(n % len, base);
	}
	else
		ft_putchar(base[n % len]);
	return (ft_lennbr_base(n, base));
}
