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
	if (n < 10 && n > 0)
		nlen++;
	while (n / 10 > 0)
	{
		n /= 10;
		nlen++;
	}
	return (nlen);
}

int	ft_putunsint(unsigned int n)
{
	int		len;
	char	*str;
	int		nbr;
	int		i;

	len = 0;
	nbr = n;
	i = ft_nbrlen(n);
	str = NULL;
	if (n >= 0 && n <= 9)
		*str = n + '0';
	else
		while (n / 10 > 0 && i > -1)
		{
			str[i] = nbr % 10;
			i--;
			n /= 10;
		}
	str[ft_strlen(str)] = '\0';
	len += ft_putstr(str);
	return (len);
}
