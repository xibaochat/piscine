/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_error_message.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:57:17 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/16 16:14:25 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	ft_manage_error_message(char *execname, char *filename)
{
	ft_putstr_fd(basename(execname));
	ft_putstr_fd(": ");
	ft_putstr_fd(filename);
	ft_putstr_fd(": ");
	ft_putstr_fd(strerror(errno));
	ft_putstr_fd("\n");
	return (-1);
}
