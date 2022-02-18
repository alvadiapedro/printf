/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:04:55 by pmiranda          #+#    #+#             */
/*   Updated: 2021/12/01 15:20:22 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*new;

	if (!n)
		return (NULL);
	new = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == new[i])
			return ((unsigned char *)&new[i]);
		i++;
	}
	return (NULL);
}
