/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:33:38 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/16 14:35:08 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_lens(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (1);
		i++;
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

int	is_invalide_base(char *base)
{
	if (!base || get_lens(base) < 2 || base_contains_repeated_elem(base)
		|| base_contains_invalide_char(base))
		return (1);
	else
		return (0);
}
