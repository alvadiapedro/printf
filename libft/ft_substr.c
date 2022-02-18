/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:16:30 by pmiranda          #+#    #+#             */
/*   Updated: 2021/11/18 16:46:04 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start || len < 1)
		return (ft_strdup(""));
	i = len;
	if ((size_t)ft_strlen(s) - start < len)
		i = ft_strlen(s) - start;
	sub = malloc(sizeof(char) * (i + 1));
	if (!sub || !s)
		return (NULL);
	ft_strlcpy(sub, s + start, i + 1);
	return (sub);
}
