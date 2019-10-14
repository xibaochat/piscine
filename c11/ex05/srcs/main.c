/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:38:23 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/17 16:10:19 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

static t_input	get_user_input(char **av)
{
	t_input		user_input;

	user_input.nb_0 = ft_atoi(av[1]);
	user_input.nb_1 = ft_atoi(av[3]);
	user_input.opp = av[2][0];
	return (user_input);
}

int				main(int ac, char **av)
{
	t_input		user_input;
	long		res;

	if (ac == 4 && av && av[0] && av[1] && av[2] && av[3])
	{
		user_input = get_user_input(av);
		if (!invalide_params(user_input))
		{
			res = get_res(user_input);
			ft_putnbr_w_new_line(res);
		}
	}
	return (0);
}
