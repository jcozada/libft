/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:16:43 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/05 17:45:08 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*v_s1;
	unsigned char	*v_s2;

	i = 0;
	v_s1 = (unsigned char *)s1;
	v_s2 = (unsigned char *)s2;
	while ((v_s1[i] != '\0' || v_s2[i] != '\0') && n)
	{
		if (v_s1[i] != v_s2[i])
			return (v_s1[i] - v_s2[i]);
		i++;
		n--;
	}
	return (0);
}
