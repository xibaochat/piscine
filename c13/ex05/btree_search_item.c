/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:17:49 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/23 16:20:09 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void		*btree_search_item(t_btree *root,
			void *data_ref, int (*cmpf)(void *, void *))
{
	void	*res;

	res = NULL;
	if (!root || !data_ref || !cmpf)
		return (NULL);
	if ((*cmpf)(root->item, data_ref) == 0)
		return (root->item);
	res = btree_search_item(root->left, data_ref, cmpf);
	if (res)
		return (res);
	res = btree_search_item(root->right, data_ref, cmpf);
	if (res)
		return (res);
	return (NULL);
}
