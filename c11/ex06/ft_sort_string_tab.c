/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 23:41:08 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/16 23:44:58 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			get_nb_str(char **str)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i])
	{
		n++;
		i++;
	}
	return (n);
}

int			compare_str(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void		ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		n;
	char	*tmp;

	i = 0;
	n = get_nb_str(tab);
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (compare_str(tab[j], tab[j + 1]) > 0)
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
