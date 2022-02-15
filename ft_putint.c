/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:28:54 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/15 14:42:39 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putint(int n)
{
	int	i;
	char *str;

	i = 0;
	str = ft_itoa(n);
	while (str[i] != '\0')
		ft_putchar(str[i++]);
	return (ft_strlen(str));
}
