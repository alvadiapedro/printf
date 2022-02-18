/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:16:19 by pmiranda          #+#    #+#             */
/*   Updated: 2021/12/01 15:26:11 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	int		j;
	char	*new;

	if (!s1)
		return (NULL);
	i = 0;
	j = 0;
	len = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[len - j]))
		j++;
	if (i == 0 && j == 0)
		return (ft_strdup(s1));
	if (i == len + 1)
		return (ft_strdup(""));
	new = ft_substr(s1, i, len - j - i + 1);
	if (!new)
		return (NULL);
	return (new);
}
