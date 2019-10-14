/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalide_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:12:55 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/16 23:14:40 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			invalide_division(t_input user_input)
{
	if (user_input.opp == '/' && (!user_input.nb_1))
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	return (0);
}

int			invaide_modulo(t_input user_input)
{
	if (user_input.opp == '%' && (!user_input.nb_1))
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int			invalide_opp(t_input user_input)
{
	char	*str;
	int		i;

	i = 0;
	str = "+-*/%";
	while (str[i])
	{
		if (str[i] == user_input.opp)
			return (0);
		i++;
	}
	ft_putnbr_w_new_line(0);
	return (1);
}

int			invalide_params(t_input user_input)
{
	return (invalide_division(user_input) || invaide_modulo(user_input)
			|| invalide_opp(user_input));
}
