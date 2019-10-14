/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:20:41 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/24 12:55:10 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *node, void (*applyf)(void *))
{
	if (!node)
		return ;
	(*applyf)(node->item);
	btree_apply_prefix(node->left, applyf);
	btree_apply_prefix(node->right, applyf);
}
