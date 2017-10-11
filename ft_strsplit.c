/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:17:40 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/11 15:58:24 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_words(char const *s, char c)
{
	while (*s && (char)*s != c)
		s++;
	return ((char *)s);
}

static int		ft_count(char const *s, char c)
{
	int			count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**arr;
	char		*str;
	int			len;
	int			size;
	int			i;

	str = (char *)s;
	i = -1;
	if (str)
	{
		size = ft_count(str, c);
		if (!(arr = (char **)ft_memalloc((sizeof(char *) * (size + 1)))))
			return (NULL);
		while (++i < size)
		{
			while (*str == c)
				str++;
			len = ft_words(str, c) - str;
			arr[i] = (char *)ft_memalloc((len * sizeof(char)) + 1);
			ft_strncpy(arr[i], str, len);
			str = ft_words(str, c);
		}
		return (arr);
	}
	return (NULL);
}
