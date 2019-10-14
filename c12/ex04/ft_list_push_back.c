/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:57:55 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/23 11:23:35 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_push_back(t_list **node, void *data)
{
	t_list	*head;

	if (!node)
		return ;
	if (node && *node)
	{
		head = *node;
		while ((*node)->next)
			*node = (*node)->next;
		(*node)->next = ft_create_elem(data);
		*node = head;
	}
	else
		*node = ft_create_elem(data);
}
