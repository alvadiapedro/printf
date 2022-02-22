/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:39:39 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/22 13:00:59 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nlen(unsigned int n)
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

char	*ft_utoa(unsigned int n)
{
	char	*str;
	int		i;

	i = ft_nlen(n);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	while (n != 0)
	{
		str[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (str);
}

int	ft_putunsint(unsigned int n)
{
	int		len;
	char		*str;

	len = 0;
	if (n == 0)
		len += ft_putchar('0');
	else
	{
		str = ft_utoa(n);
		len += ft_putstr(str);
		free(str);
	}
	return (len);
}
