/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 18:05:19 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/09 18:08:14 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0 || nb > 2147395600)
		return (0);
	while ((i * i) < nb)
	{
		i++;
		if ((i * i) == nb)
			return (i);
	}
	return (0);
}
