#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
int	ft_putstr(char *s);
int	ft_putnbr(unsigned long long n);
void    ft_putchar(char c);
int covert_hex(unsigned long long num, int alpha);

#endif