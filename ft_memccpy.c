/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:11:42 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/06 15:28:14 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*dtmp;
	unsigned char	*stmp;

	i = 0;
	dtmp = (unsigned char *)dst;
	stmp = (unsigned char *)src;
	while (n)
	{
		dtmp[i] = stmp[i];
		if (stmp[i] == (unsigned char)c)
			return (dst + i + 1);
		n--;
		i++;
	}
	return (NULL);
}
