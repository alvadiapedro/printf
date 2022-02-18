/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:59:58 by pmiranda          #+#    #+#             */
/*   Updated: 2022/02/15 14:39:55 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_rev(char **str)
{
	char	*m_str;
	char	aux;
	int		i;
	int		j;

	m_str = *str;
	i = 0;
	j = ft_strlen(*str) - 1;
	if (m_str[i] == '-')
		i++;
	while (i < j)
	{
		aux = m_str[i];
		m_str[i] = m_str[j];
		m_str[j] = aux;
		i++;
		j--;
	}
	return (m_str);
}

char	*ft_itoa(int n)
{
	char			*str;
	char			*m_str;
	unsigned int	nbr;

	if (n == 0)
		return (ft_strdup("0"));
	nbr = n;
	str = malloc(sizeof(char) * ft_nbrlen(nbr) + 1);
	if (!str)
		return (NULL);
	m_str = str;
	if (n < 0)
	{
		*m_str++ = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		*m_str++ = (nbr % 10) + '0';
		nbr /= 10;
	}
	*m_str = '\0';
	return (ft_rev(&str));
}
