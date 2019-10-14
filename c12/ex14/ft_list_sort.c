/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:09:52 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/22 22:42:01 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	swap(t_list **node, t_list **first_link)
{
	t_list	*tmp;

	tmp = (*node)->next->next;
	(*node)->next->next = *node;
	(*node)->next = tmp;
	*node = *first_link;
}

void	ft_list_sort(t_list **node, int (*cmp)())
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
			swap(node, &first_link);
			prev = NULL;
		}
		else
		{
			prev = *node;
			*node = (*node)->next;
		}
	}
	*node = first_link;
}
