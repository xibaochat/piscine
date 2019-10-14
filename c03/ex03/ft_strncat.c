/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 13:47:05 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/07 14:11:24 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_lens(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char			*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int lens;
	unsigned int i;

	i = 0;
	lens = get_lens(dest);
	while (src[i] && i < nb)
		dest[lens++] = src[i++];
	dest[lens] = '\0';
	return (dest);
}
