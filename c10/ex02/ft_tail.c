/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 09:31:40 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/21 09:31:44 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

int		main(int argc, char **argv)
{
	int		option;
	char	*str;

	if (argc < 2)
	{
		return (0);
	}
	option = ft_atoi(argv[2], 0);
	if (option == -1)
	{
		ft_illegal_offset(argv);
		return (0);
	}
	if (argc == 3)
	{
		ft_putstr(get_stdin(option));
	}
	else
		str = ft_write(argv, argc, option);
	return (0);
}
