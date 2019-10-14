/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 13:24:05 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/17 13:07:33 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

void	ft_putstr_fd(char *str);
int		ft_manage_error_message(char *execname, char *filename);

#endif
