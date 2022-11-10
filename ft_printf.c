/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:21:30 by aalami            #+#    #+#             */
/*   Updated: 2022/11/10 20:25:11 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_format(char c, va_list arg, int chr_nbr)
{
    unsigned long long  ret;
    char *ret_s;
    
    if(c == 'c')
    {
        ret = va_arg(arg,unsigned long long);
        ft_putchar(ret);
        return(chr_nbr + 1);
    }
    if(c == 'd' || c == 'i')
    {
        ret = va_arg(arg,unsigned long long);
        return(ft_putnbr(ret) + chr_nbr);
    }
    if(c == 's')
    {
        ret_s = va_arg(arg,char *);
        return(ft_putstr(ret_s) + chr_nbr);
    }
    if(c == 'p')
    {
        ret = va_arg(arg,unsigned long long);
        chr_nbr = ft_putstr("0x") + chr_nbr;
        return (covert_hex(ret,0) + chr_nbr);
    }
    if(c == 'u')
    {
        ret = va_arg(arg,unsigned int);
        return(ft_putnbr(ret) + chr_nbr);
        
    }
    if(c == 'x' || c == 'X')
    {
        ret = va_arg(arg,unsigned long long);
        if(c== 'x')
           return (covert_hex(ret,0) + chr_nbr); 
        return (covert_hex(ret,1) + chr_nbr);
    }
    return(chr_nbr);
}
int ft_printf(const char *format, ...)
{
    va_list arg;
    int i;
    unsigned int ret;
    char *ret_s;
    unsigned long long ret_p;
    int chr;
    va_start(arg, format);
    chr = 0;
    i = 0;
    while(format[i])
    {
        while(format[i] != '%' && format[i] != '\0')
        {    
            ft_putchar(format[i]);
            i++;
            if(format[i] == '\0' )
             {   ft_putchar('\0');
                chr++;}
            chr++;
        }
        i++;
        chr = ft_format(format[i], arg, chr);
        i++;
    }
    return(chr);
}

int main()
{
    // ft_printf("%c %d %c %s\n",'a',22,'c',"heheheheh");
    // printf("%i\n",2616461);
    // printf("%lu\n","hdhshvas");
    // ft_printf("%lu\n","hdhshvas");
    int a ;
    int a1 ;
    a = printf("%X %u\n",500,-100);
    a1 = ft_printf("%X %u\n",500, -100);
    // printf("%d\n",a);
    // printf("%d\n",a1);

    // ft_printf("%p","hdhshvas");
}