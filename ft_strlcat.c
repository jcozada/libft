/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:16:15 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/05 17:43:57 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_lent;
	size_t src_lent;
	size_t to_lent;

	dst_lent = ft_strlen(dst);
	src_lent = ft_strlen((char *)src);
	to_lent = dst_lent + src_lent;
	if (!(dst = (char*)ft_memchr(dst, '\0', size)))
		return (src_lent + size);
	while (*src && dst_lent < size - 1)
	{
		*dst++ = *src++;
		dst_lent++;
	}
	*dst = '\0';
	return (to_lent);
}
