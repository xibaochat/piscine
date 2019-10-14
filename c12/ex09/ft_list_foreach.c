/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 14:38:48 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/21 14:40:07 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *node, void (*f)(void *))
{
	if (!node || !f)
		return ;
	while (node)
	{
		if (node->data)
			(*f)(node->data);
		node = node->next;
	}
}
