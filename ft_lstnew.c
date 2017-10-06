/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcozada <jcozada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 17:11:23 by jcozada           #+#    #+#             */
/*   Updated: 2017/10/05 17:37:13 by jcozada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *listch;

	if (!(listch = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(listch->content = (t_list*)ft_memalloc(sizeof(content_size))))
			return (NULL);
		listch->content = ft_memcpy(listch->content, content, content_size);
		listch->content_size = content_size;
	}
	else
	{
		listch->content = NULL;
		listch->content_size = 0;
	}
	listch->next = NULL;
	return (listch);
}
