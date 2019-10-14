/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:31:10 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/09 18:32:11 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int n)
{
	int i;

	i = 2;
	if (n < 2)
		return (0);
	while (i < n && i <= 46340)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	i = 1;
	if (!ft_is_prime(nb))
		return (ft_find_next_prime(nb + 1));
	else
		return (nb);
}
