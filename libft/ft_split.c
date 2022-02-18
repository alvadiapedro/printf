/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmiranda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:09:38 by pmiranda          #+#    #+#             */
/*   Updated: 2021/12/01 15:25:10 by pmiranda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_delimiter(char i, char c)
{
	return (i == c);
}

int	ft_word_count(const char *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s && ft_delimiter(*s, c))
			s++;
		if (*s && !ft_delimiter(*s, c))
		{
			words++;
			while (*s && !ft_delimiter(*s, c))
				s++;
		}
	}
	return (words);
}

char	*ft_alloc_word(const char *s, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (s[i] != '\0' && !ft_delimiter(s[i], c))
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	i = 0;
	while (s[i] != '\0' && !ft_delimiter(s[i], c))
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;

	if (!s)
		return (NULL);
	array = (char **) malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && ft_delimiter(*s, c))
			s++;
		if (*s && !ft_delimiter(*s, c))
		{
			array[i] = ft_alloc_word(s, c);
			while (*s && !ft_delimiter(*s, c))
				s++;
			i++;
		}
	}
	array[i] = NULL;
	return (array);
}
