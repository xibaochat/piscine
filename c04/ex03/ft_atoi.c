/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 21:26:23 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/08 20:33:02 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	get_start_index(char *str)
{
	int i;

	i = 0;
	while (str[i] && is_space(str[i]))
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	sign = 1;
	res = 0;
	i = get_start_index(str);
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
