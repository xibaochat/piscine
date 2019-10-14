/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:14:47 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/22 19:57:12 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_push_front(t_list **node, void *data)
{
	t_list	*new_elem;

	if (!node)
		return ;
	new_elem = ft_create_elem(data);
	if (new_elem)
	{
		new_elem->next = *node;
		*node = new_elem;
	}
}
