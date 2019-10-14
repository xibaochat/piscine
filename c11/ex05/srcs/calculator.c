/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:44:22 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/17 16:50:02 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_add(t_input user_input)
{
	return (user_input.nb_0 + user_input.nb_1);
}

int		ft_sub(t_input user_input)
{
	return (user_input.nb_0 - user_input.nb_1);
}

int		ft_mul(t_input user_input)
{
	return (user_input.nb_0 * user_input.nb_1);
}

int		ft_div(t_input user_input)
{
	return (user_input.nb_0 / user_input.nb_1);
}

int		ft_mod(t_input user_input)
{
	return (user_input.nb_0 % user_input.nb_1);
}
