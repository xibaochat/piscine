/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:54:22 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/05 15:57:04 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'));
}

char*ft_strcapitalize(char *str)
{
	int i;
	int mark;

	mark = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] && is_alphanum(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z' && mark)
				str[i] -= 32;
			if (str[i] >= 'A' && str[i] <= 'Z' && !mark)
				str[i] += 32;
			mark = 0;
		}
		else
			mark = 1;
		i++;
	}
	return (str);
}
