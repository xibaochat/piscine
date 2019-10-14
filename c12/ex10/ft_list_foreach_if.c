/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:05:43 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/21 15:08:25 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *node,
		void (*f)(void *), void *data_ref, int (*cmp)())
{
	if (!node || !f || !data_ref || !cmp)
		return ;
	while (node)
	{
		if (((*cmp)(node->data, data_ref)) == 0)
			(*f)(node->data);
		node = node->next;
	}
}
