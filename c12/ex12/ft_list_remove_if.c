/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 16:09:37 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/22 22:30:30 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		swatch_link(t_list **prev, t_list **node, t_list **after,
			void (*free_fct)(void *))
{
	if (*prev)
		(*prev)->next = (*node)->next;
	*after = (*node)->next;
	(*free_fct)((*node)->data);
	free(*node);
	*node = *after;
}

void		ft_list_remove_if(t_list **node, void *data_ref,
			int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*after;
	t_list	*first_link;

	prev = NULL;
	first_link = NULL;
	if (!node || !*node || !data_ref || !cmp || !free_fct)
		return ;
	while (*node)
	{
		if (((*cmp)((*node)->data, data_ref)) == 0)
			swatch_link(&prev, node, &after, free_fct);
		else
		{
			if (!first_link)
				first_link = *node;
			prev = *node;
			*node = (*node)->next;
		}
	}
	*node = first_link;
}
