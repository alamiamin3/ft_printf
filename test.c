#include "ft_printf.h"
int covert_hex(unsigned long long num, int alpha)
{
    unsigned long long div;
    unsigned long long res;
    int ret;
    unsigned long long remain[17];
    int i = 0;

    div = num;
    while(div)
    {
        remain[i] = div % 16;
        // printf("%llu\n",remain[i]);
        div = div / 16;
        if(div)
            i++;
    }
    ret = 0;
    while(i >= 0)
    {
        // ret = ret * 10 + remain[i];
        if(remain[i] >= 10 && remain[i] <= 15)
        {
          if(!alpha)
            ft_putchar(remain[i] + 87);
           else
            ft_putchar(remain[i] + 55);
        }
        else
          ft_putchar(remain[i] + 48);
        ret ++;
        i--;
    }
    return(ret);
}
// int main()
// {
//     printf("%llu",covert_hex(9223372036854775807));
// }