/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 08:48:28 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/06 23:49:08 by xinwang          ###   ########.fr       */
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

void	ft_transfer_to_hex(unsigned char c)
{
	char *hex_base;

	hex_base = "0123456789abcdef";
	if (c >= 0)
		ft_putchar(hex_base[c / 16]);
	ft_putchar(hex_base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	*src;
	int				i;

	i = -1;
	src = (unsigned char *)str;
	while (src[++i])
	{
		if ((src[i] < 32) || (src[i] >= 127))
		{
			ft_putchar('\\');
			ft_transfer_to_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
	}
}
