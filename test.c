#include "ft_printf.h"
int print_hexa(unsigned long *s,int i,int form)
{
    int ret;

    ret = 0;
    while(i >= 0)
    {
        if(s[i] >= 10 && s[i] <= 15)
        {
          if(!form)
            ft_putchar(s[i] + 87);
           else
            ft_putchar(s[i] + 55);
        }
        else
          ft_putchar(s[i] + 48);
        ret ++;
        i--;
    }
    return (ret);
}
int covert_hex(unsigned long num, int alpha)
{
    unsigned long div;
    int ret;
    unsigned long remain[17];
    int i = 0;

    ret = 0;
    if(num == 0) 
      return (ret + ft_putchar('0'));
    div = num;
    while(div)
    {
        remain[i] = div % 16;
        div = div / 16;
        if(div)
            i++;
    }
    ret = print_hexa(remain,i,alpha);
    return(ret);
}
// int main()
// {
//     printf("%llu",covert_hex(9223372036854775807));
// }