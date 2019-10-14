/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 11:04:22 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/08 20:34:00 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	get_base_lens(char *base)
{
	unsigned int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int				base_contains_repeated_char(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int				base_contains_invalide_elem(char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if ((base[i] >= '0' && base[i] <= '9') ||
			(base[i] >= 'a' && base[i] <= 'z') ||
			(base[i] >= 'A' && base[i] <= 'Z'))
			i++;
		else
			return (1);
	}
	return (0);
}

int				is_invalide_base(char *base)
{
	int base_lens;

	base_lens = get_base_lens(base);
	if (!base || !base_lens || base_lens == 1 ||
		base_contains_repeated_char(base) ||
		base_contains_invalide_elem(base))
		return (1);
	return (0);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int base_lens;
	unsigned int n;

	if (!base)
		return ;
	base_lens = get_base_lens(base);
	if (is_invalide_base(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -1 * nbr;
	}
	else
		n = nbr;
	if (n >= base_lens)
		ft_putnbr_base(n / base_lens, base);
	write(1, &base[n % base_lens], 1);
}
