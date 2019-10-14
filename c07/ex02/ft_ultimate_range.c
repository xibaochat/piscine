/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:39:14 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/20 18:28:53 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int lens;
	int *tab;
	int i;

	i = 0;
	tab = NULL;
	if (min >= max)
	{
		*range = tab;
		return (0);
	}
	lens = max - min;
	if ((tab = (int *)malloc(sizeof(int) * lens)) == NULL)
		return (-1);
	while (i < lens)
		tab[i++] = min++;
	*range = tab;
	return tab;
}
