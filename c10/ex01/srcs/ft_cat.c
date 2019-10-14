/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:49:06 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/17 14:01:16 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void		write_on_output(int fd)
{
	char	buff[30001];
	int		taille;

	buff[30000] = '\0';
	while ((taille = read(fd, buff, 30000)))
		write(1, buff, taille);
	close(fd);
}

int			ft_get_directory(char *execname, char *directory)
{
	int		dir_descriptor;

	dir_descriptor = open(directory, O_DIRECTORY);
	if (dir_descriptor > 0)
	{
		ft_putstr_fd(basename(execname));
		ft_putstr_fd(": ");
		ft_putstr_fd(directory);
		ft_putstr_fd(": Is a directory\n");
		return (1);
	}
	return (0);
}

int			ft_get_file_descriptor(char *filename)
{
	return (open(filename, O_RDONLY));
}

int			ft_cat(int ac, char **av)
{
	int		i;
	int		fd;

	i = 0;
	while (++i < ac)
	{
		if (!ft_get_directory(av[0], av[i]))
		{
			fd = ft_get_file_descriptor(av[i]);
			if (fd < 3)
				ft_manage_error_message(av[0], av[i]);
			else
			{
				write_on_output(fd);
				close(fd);
			}
		}
	}
	return (0);
}

int			main(int ac, char **av)
{
	char	c;

	if (ac == 1)
	{
		while (read(STDIN_FILENO, &c, 1))
			write(1, &c, 1);
	}
	else
		return (ft_cat(ac, av));
}
