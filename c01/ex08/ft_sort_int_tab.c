/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 17:17:08 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/03 22:58:58 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *ptr1, int *ptr2)
{
	int tmp;

	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	if (!tab || !size)
		return ;
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
