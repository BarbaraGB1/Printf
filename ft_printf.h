/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:32:58 by bargarci          #+#    #+#             */
/*   Updated: 2023/06/08 21:33:02 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdarg.h>
# include	<unistd.h>

int		ft_printf(char const *str, ...);
int		ft_putnbr_base(unsigned int n, char *base);
int		ft_lennbr_base(unsigned long long n, char *base);
int		ft_putptr(unsigned long long n, char *base);
int		ft_strlen(const char *s);
int		ft_functions(char symbol, va_list args);
int		ft_putnbr_unsigned(unsigned int n, char *base);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
void	ft_putnbr2(int n);
int		ft_lennbr(int n);
int		ft_putnbr_base_hex(unsigned long long n, char *base);
int		ft_lennbr_base_hex(unsigned long long n);
int		ft_put_hex(unsigned int n, char *base);

#endif
