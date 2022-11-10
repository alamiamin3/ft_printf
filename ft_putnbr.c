/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:56:36 by aalami            #+#    #+#             */
/*   Updated: 2022/11/10 19:10:27 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(unsigned long long n)
{
	// if (n == -2147483648)
	// {
	// 	ft_putchar('-');
	// 	ft_putchar('2');
	// 	n = 147483648;
	// }
	int ret;
	ret = 0;
	if (n >= 0 && n < 10)
	{	
		ft_putchar(('0' + n));
		ret++;
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ret++;
		ft_putnbr((n * -1));
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return(ret);
}