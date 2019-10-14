/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 13:19:52 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/10 10:50:22 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_contains_repeated_elem(char *base)
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

int	base_contains_invalide_char(char *base)
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

int	elem_in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c != base[i])
			i++;
		else
			return (1);
	}
	return (0);
}

int	get_elem_index(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int res;
	int base_lens;

	i = 0;
	base_lens = 0;
	sign = 1;
	res = 0;
	while (base[base_lens])
		base_lens++;
	if (base_lens < 2 || base_contains_repeated_elem(base) ||
		base_contains_invalide_char(base))
		return (0);
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && elem_in_base(str[i], base))
		res = res * base_lens + get_elem_index(str[i++], base);
	return (sign * res);
}
