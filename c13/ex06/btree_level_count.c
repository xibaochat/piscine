/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:30:37 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/23 17:32:42 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

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
