/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:15:00 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/18 11:25:56 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	if (str == NULL)
	{
		len = ft_printf("(null)");
		return (len);
	}
	len = ft_strlen(str);
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	return (len);
}
