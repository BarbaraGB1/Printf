/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bargarci <bargarci@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:16:50 by bargarci          #+#    #+#             */
/*   Updated: 2023/05/30 20:46:24 by bargarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

#include <stdarg.h>
#include <unistd.h>

int ft_printf(char const *, ...);
int ft_putnbr_base(unsigned int n, char *base);
int ft_lennbr_base(int n, char *base);
int	ft_strlen(const char *s);
int ft_functions(char symbol, va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
void ft_putnbr2(int n);
int ft_lennbr(int n);

#endif

