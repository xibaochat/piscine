/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 07:23:03 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/15 22:11:51 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			get_str_lens(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int			get_total_strs_lens(int size, char **strs)
{
	int		i;
	int		total_lens;

	i = size;
	total_lens = 0;
	while (--i >= 0)
		total_lens += get_str_lens(strs[i]);
	return (total_lens);
}

char		*initialize_str_buffer(int tab_size, char **strs, char *sep)
{
	int		total_strs_lens;
	int		sep_lens;
	char	*str;

	total_strs_lens = get_total_strs_lens(tab_size, strs);
	sep_lens = (tab_size - 1) * get_str_lens(sep);
	str = (char*)malloc(sizeof(char) * (total_strs_lens + sep_lens + 1));
	if (str)
		str[total_strs_lens + sep_lens] = '\0';
	return (str);
}

char		*ft_strjoin(int tab_size, char **strs, char *sep)
{
	char	*f_str;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = 0;
	if (tab_size <= 0 || !strs || !*strs || !sep)
	{
		f_str = (char *)malloc(sizeof(char));
		f_str[0] = '\0';
		return (f_str);
	}
	f_str = initialize_str_buffer(tab_size, strs, sep);
	while (++i < tab_size)
	{
		j = 0;
		while (strs[i][j])
			f_str[k++] = strs[i][j++];
		j = 0;
		if (i + 1 != tab_size)
			while (sep[j])
				f_str[k++] = sep[j++];
	}
	return (f_str);
}

int main(int ac, char **av)
{

	printf("%s", ft_strjoin(--ac,av + 1,"***"));
	return 0;
}
