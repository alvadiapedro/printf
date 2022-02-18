/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:15:04 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/18 11:59:46 by pmiranda         ###   ########.fr       */
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
			len += ft_check_spec(input++, args);
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
/*
int	main(void)
{
	char a = 'a';
	char *s = "test";
	ft_printf("this is %c %s!\n", a, s);
	return (0);
}*/
