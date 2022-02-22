/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:15:04 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/22 12:32:16 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int	len;
	va_list	args;

	len = 0;
	va_start(args, input);
	len += ft_print_to_percent(input, args);
	va_end(args);
	return (len);
}

int	ft_print_to_percent(const char *input, va_list args)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			len += ft_check_spec(&input[i + 1], args);
			i += 2;
		}
		else
		{
			len += ft_putchar(input[i]);
			i++;
		}
	}
	return (len);
}
