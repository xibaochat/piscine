/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 19:19:31 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/03 20:51:27 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	strictinc(int prev, char *res, int index, int n)
{
	int i;

	if (index == n)
	{
		res[index] = '\0';
		ft_putstr(res);
		if (res[0] != 10 - n + '0')
			ft_putstr(", ");
		return ;
	}
	i = prev;
	while (i <= 9)
	{
		res[index] = i + '0';
		strictinc(i + 1, res, index + 1, n);
		i++;
	}
}

void	ft_print_comb(void)
{
	int		n;
	char	res[4];

	n = 3;
	strictinc(0, res, 0, n);
}
