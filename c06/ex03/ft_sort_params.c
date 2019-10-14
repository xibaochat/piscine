/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:27:32 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/09 19:08:34 by xinwang          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	swap_str(char **s1, char **s2)
{
	char *str;

	str = *s2;
	*s2 = *s1;
	*s1 = str;
}

int		main(int ac, char **av)
{
	int i;
	int j;
	int k;

	k = 1;
	i = 0;
	while (i < ac - 2)
	{
		j = 1;
		while (j < ac - i - 1)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				swap_str(av + j, av + j + 1);
			j++;
		}
		i++;
	}
	while (k < ac)
	{
		ft_putstr(av[k]);
		ft_putchar('\n');
		k++;
	}
	return (0);
}
