/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:24:12 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/23 12:21:07 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		swap(t_list **node, t_list **first_link, t_list **prev)
{
	t_list	*tmp;

	tmp = (*node)->next->next;
	(*node)->next->next = *node;
	(*node)->next = tmp;
	*node = *first_link;
	*prev = NULL;
}

void		ft_list_sort2(t_list **node, int (*cmp)())
{
	t_list	*prev;
	t_list	*first_link;

	if (!node || !*node || !cmp)
		return ;
	prev = NULL;
	first_link = *node;
	while ((*node)->next)
	{
		if ((*cmp)((*node)->data, (*node)->next->data) > 0)
		{
			if (prev)
				prev->next = (*node)->next;
			else
				first_link = (*node)->next;
			swap(node, &first_link, &prev);
		}
		else
		{
			prev = *node;
			*node = (*node)->next;
		}
	}
	*node = first_link;
}

void		ft_sorted_list_merge(t_list **node,
			t_list *added_node, int (*cmp)())
{
	t_list *first_link;

	if (!node)
		return ;
	if (*node)
	{
		first_link = *node;
		while ((*node)->next)
			*node = (*node)->next;
		(*node)->next = added_node;
		*node = first_link;
	}
	else
		*node = added_node;
	ft_list_sort2(node, cmp);
}
