/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 13:39:10 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/16 13:41:52 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	if (!tab || !length || !f)
		return ;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
