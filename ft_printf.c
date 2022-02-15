/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:15:04 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/15 14:53:42 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int	len;

	len = 0;
	va_start(args, input);
	len += ft_print_to_percent(input, args);
	va_end(args);
	free((char *)input);
	return (len);
}

int	ft_print_to_percent(const char *input, va_list args)
{
	int	len;

	len = 0;
	while (*input)
	{
		if (*input == '%')
		{
			len += ft_check_spec(input++);
			input ++;
		}
		else
		{
			len += ft_putchar(*input);
			input++;
		}
	}
	return (len);
}
