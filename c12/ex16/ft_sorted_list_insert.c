/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 23:28:04 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/23 12:19:17 by xinwang          ###   ########.fr       */
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
	t_list *prev;
	t_list *first_link;

	if (!node)
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

void		ft_sorted_list_insert(t_list **node, void *data, int (*cmp)())
{
	t_list	*head;

	if (!node)
		return ;
	if (!(*node))
		*node = ft_create_elem(data);
	else
	{
		head = *node;
		while ((*node)->next)
			*node = (*node)->next;
		(*node)->next = ft_create_elem(data);
		*node = head;
		ft_list_sort2(node, cmp);
	}
}
