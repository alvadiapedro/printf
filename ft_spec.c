/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:15:10 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/15 14:54:35 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_spec(const char *input, va_list args)
{
	int	len;

	len = 0;
	if (*input == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (*input == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (*input == 'p')
		len += ft_putptr(va_arg(args, //*));// como é que defino o pointer para chamar esta função?
	else if (*input == 'd' || *input == 'i')
		len += ft_putint(va_arg(args, int));
	else if (*input == 'u') 
		len += ft_putunsint(va_arg(args, unsigned int));
	else if (*input == 'x')
		len += ft_//fazer este hoje
	else if (*input == 'X')
		len += ft_//fazer este hoje
	else if (*input == '%')
		len += ft_putchar('%');
	return (len);
}
