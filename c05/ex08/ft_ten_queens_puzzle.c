/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:01:52 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/10 09:24:44 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(int tab[10])
{
	int i;

	i = -1;
	while (++i < 10)
		ft_putchar(tab[i] + '0');
	ft_putchar('\n');
}

int		check(int tab[10], int line, int list)
{
	int i;

	i = -1;
	while (++i < line)
	{
		if (tab[i] == list || tab[i] + i == line + list ||
			i - tab[i] == line - list)
			return (0);
	}
	return (1);
}

void	back_track(int tab[10], int *count, int line)
{
	int list;

	list = -1;
	if (line == 10)
	{
		*count = (*count) + 1;
		display(tab);
		return ;
	}
	while (++list < 10)
	{
		if (check(tab, line, list))
		{
			tab[line] = list;
			back_track(tab, count, line + 1);
		}
	}
}

int		ft_ten_queens_puzzle(void)
{
	int i;
	int count;
	int tab[10];

	i = -1;
	count = 0;
	while (++i < 10)
		tab[i] = -1;
	back_track(tab, &count, 0);
	return (count);
}

int main()
{
	ft_ten_queens_puzzle();
	return 0;
}
