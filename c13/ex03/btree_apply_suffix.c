/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:54:49 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/24 12:55:45 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_suffix(t_btree *node, void (*applyf)(void *))
{
	if (!node)
		return ;
	btree_apply_suffix(node->left, applyf);
	btree_apply_suffix(node->right, applyf);
	(*applyf)(node->item);
}
