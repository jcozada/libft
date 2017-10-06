/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:10:23 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/05 17:36:11 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	ft_isneg(int *n, char c)
{
	c = '-';
	(*n == -2147483648) ? (*n = 2147483647) : (*n *= -1);
	return (c);
}

static	int		ft_length_int(int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		length;
	int		num;

	i = ft_length_int(n);
	length = i;
	if ((str = (char *)malloc(sizeof(char) * (i + 2))) == NULL)
		return (NULL);
	num = n;
	if (n < 0)
		str[0] = ft_isneg(&n, str[0]);
	else
		str[i--] = '\0';
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[i] = '0' + n % 10;
		n /= 10;
		i--;
	}
	(num == -2147483648) ? (str[length] += 1) : (str[0] = str[0]);
	str[length + 1] = '\0';
	return (str);
}
