/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 20:05:38 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/03 20:59:19 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (str)
	{
		while (str[++i])
			ft_putchar(str[i]);
	}
}

void	strictinc(int prev, char *res, int index, int n)
{
	int	i;

	i = prev;
	if (index == n)
	{
		res[index] = '\0';
		ft_putstr(res);
		if (res[0] != 10 - n + '0')
			ft_putstr(", ");
		return ;
	}
	while (i <= 9)
	{
		res[index] = i + '0';
		strictinc(i + 1, res, index + 1, n);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char res[n + 1];

	strictinc(0, res, 0, n);
}
