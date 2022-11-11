/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:33:48 by aalami            #+#    #+#             */
/*   Updated: 2022/11/11 18:43:09 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] && (char)s[i] != (char)c)
		i++;
	if ((char)s[i] == (char)c)
		return (1);
	else
		return (0);
}