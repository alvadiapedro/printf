/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:39:39 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/16 16:41:38 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned int n)
{
	int	nlen;

	nlen = 0;
	while (n != 0)
	{
		n /= 10;
		nlen++;
	}
	return (nlen);
}

int	ft_putunsint(unsigned int n)
{
	int		len;
	char		*str;
	unsigned int		nbr;
	int		i;

	len = 0;
	nbr = n;
	i = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
	    return (0);
	str[i] = '\0';
	while (n != 0)
	{
		str[i] = nbr % 10 + '0';
		i--;
		n /= 10;
	}
	len += ft_putstr(str);
	if (n == '0')
		len += ft_putchar('0');
	return (len);
}
