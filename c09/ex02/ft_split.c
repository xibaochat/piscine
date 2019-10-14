/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 12:04:53 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/12 14:45:43 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		char_in_sep(char c, char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int		get_words_count(char *str, char *sep)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((char_in_sep(str[i - 1], sep) && !char_in_sep(str[i], sep) && i > 0)
			|| (!i && !char_in_sep(str[i], sep)))
			count++;
		i++;
	}
	return (count);
}

int		get_lens(char *str, int i, char *sep)
{
	int j;

	j = 0;
	while (str[i] && !char_in_sep(str[i], sep))
	{
		i++;
		j++;
	}
	return (j);
}

char	**get_tab(char **tab, char *str, char *charset)
{
	int i;
	int j;
	int k;
	int lens;

	i = 0;
	j = 0;
	while (str[i])
	{
		k = 0;
		while (str[i] && char_in_sep(str[i], charset))
			i++;
		if (!(lens = get_lens(str, i, charset)))
			return (tab);
		tab[j] = (char *)malloc(lens + 1);
		if (!tab[j])
			return (NULL);
		while (str[i] && k < lens)
			tab[j][k++] = str[i++];
		tab[j++][k] = '\0';
		tab[j] = NULL;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int	words_nb;
	char**tab;
	char**res;

	tab = NULL;
	res = (char **)malloc(sizeof(char*));
	res[0] = NULL;
	if (!str || !charset)
		return (NULL);
	if (!(words_nb = get_words_count(str, charset)))
		return (res);
	tab = (char **)malloc(sizeof(char *) * (words_nb + 1));
	if (!tab)
		return (NULL);
	tab = get_tab(tab, str, charset);
	return (tab);
}
