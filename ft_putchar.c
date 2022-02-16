/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:35:57 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/16 15:00:56 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int	len = 0;
	len+= ft_putchar('x');
	printf("len = %i", len);
	return (0);
}*/
