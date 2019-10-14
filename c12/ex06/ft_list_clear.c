/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 11:16:10 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/23 00:41:00 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_clear(t_list *node, void (*free_fct)(void *))
{
	t_list	*current;

	if (!node || !free_fct)
		return ;
	while (node)
	{
		current = node->next;
		node->next = NULL;
		(*free_fct)(node->data);
		free(node);
		node = current;
	}
}
