/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_res.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:41:05 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/17 16:50:33 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	get_res(t_input user_input)
{
	if (user_input.opp == '+')
		return (ft_add(user_input));
	if (user_input.opp == '-')
		return (ft_sub(user_input));
	if (user_input.opp == '*')
		return (ft_mul(user_input));
	if (user_input.opp == '/')
		return (ft_div(user_input));
	if (user_input.opp == '%')
		return (ft_mod(user_input));
	return (0);
}
