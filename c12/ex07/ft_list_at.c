/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 12:25:21 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/22 17:25:48 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *node, unsigned int nbr)
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
