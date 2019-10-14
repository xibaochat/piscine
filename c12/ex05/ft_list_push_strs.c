/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 10:36:57 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/22 22:07:05 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_push_strs(int size, char **strs)
{
	t_list	*head;
	t_list	*current_link;

	if (!strs || size <= 0 || !(*strs))
		return (NULL);
	current_link = NULL;
	while (--size >= 0)
	{
		if (!current_link)
		{
			current_link = ft_create_elem(strs[size]);
			head = current_link;
		}
		else
		{
			current_link->next = ft_create_elem(strs[size]);
			current_link = current_link->next;
		}
	}
	return (head);
}
