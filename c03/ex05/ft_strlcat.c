/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 16:32:20 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/08 23:22:04 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	get_lens(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_lens;
	unsigned int src_lens;
	unsigned int meme;
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	dest_lens = get_lens(dest);
	src_lens = get_lens(src);
	meme = size;
	while (dest[i] && size)
	{
		i++;
		size--;
	}
	if (!size)
		return (meme + src_lens);
	while (src[j] && size > 1)
	{
		dest[i++] = src[j++];
		size--;
	}
	dest[i] = '\0';
	return (dest_lens + src_lens);
}

int main()
{
	char dest[10] = "ecole";
	char src[3] = "12";
//	printf("%u\n",ft_strlcat(dest, src, 10));
	//printf("%s", dest);
	printf("%lu",strlcat(dest, src, 10));
	printf("%s", dest);
	return 0;


}
