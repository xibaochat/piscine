/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 17:51:40 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/22 18:35:08 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_merge(t_list **node, t_list *begin_list2)
{
	t_list	*head;

	if (!node)
		return ;
	if (*node)
	{
		head = *node;
		while ((*node)->next)
		{
			*node = (*node)->next;
		}
		(*node)->next = begin_list2;
		*node = head;
	}
	else
		*node = begin_list2;
}
