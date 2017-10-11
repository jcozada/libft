/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:17:40 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/11 16:58:35 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_strgetworld(char const *s, char **str, size_t size, char c)
{
	size_t		i;
	char const	*start;

	i = 0;
	while (i < size)
	{
		while (*s == c)
			s++;
		start = s;
		while (*s != c && *s)
			s++;
		str[i] = ft_strsub(start, 0, (s - start));
		i++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	size;
	size_t	i;

	size = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			size++;
		i++;
	}
	str = (char**)ft_memalloc((sizeof(str) * size) + 1);
	if (!str)
		return (0);
	i = 0;
	str = ft_strgetworld(s, str, size, c);
	return (str);
}
