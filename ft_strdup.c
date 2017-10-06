/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:15:39 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/05 17:43:16 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dst;

	if (((dst = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))) == NULL))
		return (NULL);
	dst = ft_strcpy(dst, s1);
	return (dst);
}
