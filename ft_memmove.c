/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:12:44 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/05 17:40:28 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp1;
	unsigned char *tmp2;
	size_t				i;

	tmp1 = (unsigned char*)dst;
	tmp2 = (unsigned char*)src;
	i = 0;
	if (src > dst)
	{
		while (i < len)
		{
			tmp1[i] = tmp2[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len --;
			tmp1[len] = tmp2[len];
		}
	}
	return (dst);
}
