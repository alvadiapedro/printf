/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:56:57 by pmiranda          #+#    #+#             */
/*   Updated: 2021/11/17 12:57:23 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*alloc;

	alloc = malloc(n * size);
	if (alloc == NULL)
		return (NULL);
	ft_bzero(alloc, n * size);
	return (alloc);
}
