/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 00:54:13 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/23 14:13:01 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list					*ft_list_at(t_list *node, int nbr)
{
	if (!node)
		return (NULL);
	while (node && nbr)
	{
		node = node->next;
		nbr--;
	}
	if (nbr == 0)
		return (node);
	else
		return (NULL);
}

int						ft_list_size(t_list *node)
{
	if (!node)
		return (0);
	if (node)
		return (1 + ft_list_size(node->next));
	return (0);
}

void					swap(t_list *n1, t_list *n2)
{
	void				*tmp;

	tmp = n1->data;
	n1->data = n2->data;
	n2->data = tmp;
}

void					ft_list_reverse_fun(t_list *node)
{
	unsigned int		lens;
	unsigned int		i;

	i = 0;
	if (!node)
		return ;
	lens = ft_list_size(node);
	if (!lens || lens == 1)
		return ;
	while (i < lens / 2)
	{
		swap(ft_list_at(node, i), ft_list_at(node, lens - i - 1));
		i++;
	}
}
