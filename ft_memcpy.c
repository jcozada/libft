/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:12:29 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/06 15:28:36 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dtmp;
	unsigned char	*stmp;

	i = 0;
	dtmp = (unsigned char *)dst;
	stmp = (unsigned char *)src;
	while (n)
	{
		dtmp[i] = stmp[i];
		i++;
		n--;
	}
	return (dst);
}
