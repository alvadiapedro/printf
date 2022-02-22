/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:51:50 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/22 13:29:42 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *input, ...);
int		ft_print_to_percent(const char *input, va_list args);
int		ft_putchar(char c);
int		ft_putint(int n);
int		ft_putstr(char *str);
int		ft_nlen(unsigned int n);
char	*ft_utoa(unsigned int n);
int		ft_putunsint(unsigned int n);
int		ft_putptr(unsigned long n);
int		ft_puthex(unsigned int n, int x);
char	ft_change_base(unsigned int n, int x);
int		ft_check_spec(const char *input, va_list args);

#endif
