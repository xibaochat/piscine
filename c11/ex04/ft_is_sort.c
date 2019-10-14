/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:26:08 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/17 17:40:51 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_increase(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (((*f)(tab[i], tab[i + 1])) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		is_decrease(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (((*f)(tab[i], tab[i + 1])) < 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	if (length <= 1)
		return (1);
	if (is_increase(tab, length, f) || is_decrease(tab, length, f))
		return (1);
	return (0);
}
