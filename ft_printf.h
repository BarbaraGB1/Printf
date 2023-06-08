#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdarg.h>
# include	<unistd.h>

int		ft_printf(char const *str, ...);
int		ft_putnbr_base(unsigned long n, char *base);
int		ft_lennbr_base(int n, char *base);
int		ft_putptr(void *n, char *base);
int		ft_strlen(const char *s);
int		ft_functions(char symbol, va_list args);
int		ft_putnbr_unsigned(unsigned int n, char *base);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
void	ft_putnbr2(int n);
int		ft_lennbr(int n);

#endif
