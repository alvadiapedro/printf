/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 10:45:08 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/18 11:45:32 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int x)
{
	static int	len;

	len = 0;
	if (n / 16 != 0)
	{
		ft_puthex(n / 16, x);
		ft_putchar(ft_change_base(n % 16, x));
		len++;
	}
	else
	{
		ft_putchar(ft_change_base(n % 16, x));
		len++;
	}
	return (len);
}

char	ft_change_base(unsigned int n, int x)
{
	char	*hex1;
	char	*hex2;

	hex1 = "0123456789abcdef\0";
	hex2 = "0123456789ABCEDF\0";
	if (x == 1)
		return (hex2[n]);
	return (hex1[n]);
}
