/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:18:05 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/06 13:30:05 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int len;
	int a;
	int z;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	a = 0;
	while (s[a] && (s[a] == '\t' || s[a] == ' ' || s[a] == '\n'))
		a++;
	if (a == len)
		return (ft_strnew(0));
	z = 0;
	while ((s[len - z - 1] == '\t' || s[len - z - 1] == ' '
	|| s[len - z - 1] == '\n') && (len - z - 1) > 0)
		z++;
	return (ft_strsub(s, a, len - z - a));
}
