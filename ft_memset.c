/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:12:49 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/06 15:28:57 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	int				i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)b;
	while (n)
	{
		tmp[i] = c;
		i++;
		n--;
	}
	return (b);
}
