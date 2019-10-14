/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 11:45:08 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/16 14:27:15 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			get_lens(char *str);
int			base_contains_repeated_elem(char *base);
int			base_contains_invalide_char(char *base);
int			elem_in_base(char c, char *base);
int			is_invalide_base(char *base);

int			get_elem_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int			ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;
	int	base_lens;

	i = 0;
	sign = 1;
	res = 0;
	base_lens = get_lens(base);
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && elem_in_base(str[i], base))
		res = res * base_lens + get_elem_index(str[i++], base);
	return (sign * res);
}

char		*get_converted_nb(int res, char *str, char *base_to, int *i)
{
	int lens;

	lens = get_lens(base_to);
	if (res >= lens)
		get_converted_nb(res / lens, str, base_to, i);
	str[(*i)++] = base_to[res % lens];
	return (str);
}

char		*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		res;
	char	*str;
	int		i;

	i = 0;
	if (is_invalide_base(base_from) || is_invalide_base(base_to))
		return (NULL);
	res = ft_atoi_base(nbr, base_from);
	str = (char *)malloc(sizeof(char) * 35);
	if (res < 0)
	{
		str[i] = '-';
		res = -res;
		i++;
	}
	str = get_converted_nb(res, str, base_to, &i);
	str[i] = '\0';
	return (str);
}
