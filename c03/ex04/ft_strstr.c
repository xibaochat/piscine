/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:28:16 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/07 15:33:43 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;
	unsigned int tmp;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		tmp = i;
		j = 0;
		while (str[tmp] && to_find[j] && (str[tmp] == to_find[j]))
		{
			tmp++;
			j++;
			if (!to_find[j])
				return (str + i);
		}
		i++;
	}
	return (0);
}
