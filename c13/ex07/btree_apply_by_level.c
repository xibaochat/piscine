/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 18:29:43 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/24 10:34:43 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	mark_fst_elem_apply_by_level(t_btree *root, int current_level,
		int *level_mark, void (*applyf)(void *item, int current_level,
		int is_first_elem))
{
	int is_first_elem;

	is_first_elem = 0;
	if (!root || !level_mark || !applyf)
		return ;
	if (!level_mark[current_level])
	{
		is_first_elem = 1;
		level_mark[current_level] = 1;
	}
	if (root)
		(*applyf)(root->item, current_level, is_first_elem);
	mark_fst_elem_apply_by_level(root->left, current_level + 1,
	level_mark, applyf);
	mark_fst_elem_apply_by_level(root->right, current_level + 1,
	level_mark, applyf);
}

int		get_max_depth(t_btree *root, int nleft, int nright)
{
	int	deep;

	deep = 0;
	if (root)
	{
		nleft = get_max_depth(root->left, nleft, nright);
		nright = get_max_depth(root->right, nleft, nright);
		deep = nleft > nright ? (nleft + 1) : (nright + 1);
	}
	return (deep);
}

int		btree_level_count(t_btree *root)
{
	int	nleft;
	int	nright;
	int	count;

	nleft = 0;
	nright = 0;
	count = get_max_depth(root, nleft, nright);
	return (count);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
		int current_level, int is_first_elem))
{
	int	count;
	int	i;
	int	*level_mark;

	i = 0;
	count = btree_level_count(root);
	level_mark = (int *)malloc(sizeof(int) * count);
	if (!level_mark)
		return ;
	while (i < count)
	{
		level_mark[i] = 0;
		i++;
	}
	mark_fst_elem_apply_by_level(root, 0, level_mark, applyf);
}
