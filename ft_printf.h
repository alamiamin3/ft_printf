#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
int	ft_putstr(char *s);
int	ft_putnbr(long long n,int *num);
int    ft_putchar(char c);
int covert_hex(unsigned long num, int alpha);
int	ft_strchr(const char *s, int c);
int print_hexa(unsigned long *s,int i,int form);

#endif