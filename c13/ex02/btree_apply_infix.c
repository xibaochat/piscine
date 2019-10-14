/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:45:22 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/24 12:55:32 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *node, void (*applyf)(void *))
{
	if (!node)
		return ;
	btree_apply_infix(node->left, applyf);
	(*applyf)(node->item);
	btree_apply_infix(node->right, applyf);
}
