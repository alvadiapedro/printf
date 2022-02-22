/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:36:15 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/22 13:32:32 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long n)
{
    static int	len;

    len = 0;
    if (n / 16 != 0)
    {
		ft_putptr(n / 16);
		ft_putchar(ft_change_base(n % 16, 0));
		len++;
    }
	else
	{
		ft_putchar(ft_change_base(n % 16, 0));
		len++;
	}
    return (len + 2);
}
