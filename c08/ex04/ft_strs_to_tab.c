/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 12:27:37 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/20 11:37:42 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					get_lens(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *str)
{
	int				i;
	int				lens;
	char			*dest;

	if (!str)
		return (NULL);
	i = 0;
	lens = get_lens(str);
	dest = (char *)malloc(sizeof(char) * (lens + 1));
	dest[lens] = '\0';
	while (i < lens)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*ptr;
	int					i;

	i = 0;
	if (!av)
		return (NULL);
	ptr = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!ptr)
		return (NULL);
	while (i < ac)
	{
		ptr[i].size = get_lens(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		i++;
	}
	ptr[i].str = NULL;
	return (ptr);
}
