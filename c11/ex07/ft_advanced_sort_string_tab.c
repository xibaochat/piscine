/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 09:06:57 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/17 09:11:05 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			get_nb_strs(char **tab)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (tab[i])
	{
		i++;
		n++;
	}
	return (n);
}

void		ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		n;
	int		i;
	int		j;
	char	*tmp;

	if (!tab || !*tab || !cmp)
		return ;
	i = 0;
	n = get_nb_strs(tab);
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (((*cmp)(tab[j], tab[j + 1])) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
