/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 13:25:26 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/06 17:50:22 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		conver_to_hex(char c)
{
	char *base_hex;

	base_hex = "0123456789abcdef";
	if (c >= 16)
		conver_to_hex(c / 16);
	write(1, &base_hex[c % 16], 1);
}

void		ft_putnbr(int nb)
{
	int		n;
	char	c;

	if (nb < 0)
		n = -1 * nb;
	else
		n = nb;
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void		display(int count, char *str, int i, int j)
{
	while ((count *= 10) < 100000000)
		write(1, "0", 1);
	ft_putnbr(count * 10);
	write(1, ":", 1);
	while (str[j] && j / 16 == i)
	{
		if (j % 2 == 0)
			write(1, " ", 1);
		conver_to_hex(str[j]);
		j++;
	}
}

void		display_str(char *str, int i, int *j)
{
	char c;

	c = '.';
	while (str[*j] && *j / 16 == i)
	{
		if (c < 32 && c != 127)
			write(1, &str[(*j)++], 1);
		else
			write(1, &c, 1);
	}
}

void		*ft_print_memory(void *addr, unsigned int size)
{
	char	*str;
	int		count;
	int		i;
	int		j;

	i = -1;
	j = 0;
	str = (char *)addr;
	count = 0;
	if (size % 16)
		count = size / 16 + 1;
	else
		count = size / 16;
	if (size)
	{
		while (++i < count)
		{
			display(count, str, i, j);
			write(1, " ", 1);
			display_str(str, i, &j);
			write(1, "\n", 1);
		}
		return (addr);
	}
	return (0);
}
