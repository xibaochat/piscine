/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 15:21:21 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/22 15:08:17 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_find(t_list *node, void *data_ref, int (*cmp)())
{
	if (!node || !data_ref || !cmp)
		return (NULL);
	while (node)
	{
		if (((*cmp)(node->data, data_ref)) == 0)
			return (node);
		node = node->next;
	}
	return (NULL);
}
