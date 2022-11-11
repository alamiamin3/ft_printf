/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:56:36 by aalami            #+#    #+#             */
/*   Updated: 2022/11/11 16:23:07 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long n,int *num)
{
	// if (n == -2147483648)
	// {
	// 	ft_putchar('-');
	// 	ft_putchar('2');
	// 	n = 147483648;
	// }
	if (n >= 0 && n < 10)
	{	
		*num += ft_putchar(('0' + n));
	}
	else if (n < 0)
	{
		*num += ft_putchar('-');
		ft_putnbr((n * -1),num);
	}
	else
	{
		ft_putnbr(n / 10,num);
		ft_putnbr(n % 10,num);
	}
	return(*num);
}