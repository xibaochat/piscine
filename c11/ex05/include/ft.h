/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:43:27 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/17 17:26:55 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

typedef struct		s_input
{
	int			nb_0;
	char		opp;
	int			nb_1;
}					t_input;

int					ft_atoi(char *str);
void				ft_putnbr_w_new_line(long n);
void				ft_putchar(char c);
int					ft_atoidd(t_input user_input);
int					ft_add(t_input user_input);
int					ft_sub(t_input user_input);
int					ft_mul(t_input user_input);
int					ft_div(t_input user_input);
int					ft_mod(t_input user_input);
int					get_res(t_input user_input);
void				ft_putstr(char *str);
int					invalide_params(t_input user_input);

#endif
