/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:25:29 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/23 11:24:58 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void		ft_list_reverse(t_list **node)
{
	t_list	*last;
	t_list	*current;
	t_list	*next;

	if (!node || !(*node))
		return ;
	current = *node;
	last = NULL;
	while (current)
	{
		next = current->next;
		current->next = last;
		last = current;
		current = next;
	}
	*node = last;
}
