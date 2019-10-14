/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinwang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 08:33:30 by xinwang           #+#    #+#             */
/*   Updated: 2019/07/16 09:26:22 by xinwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void		display_file(int fd)
{
	char	c;

	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
}

int			main(int ac, char **av)
{
	int		fd;

	if (ac < 2)
		write(2, "File name missing.\n", 19);
	if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			write(2, "Cannot read file.\n", 18);
			return (0);
		}
		else
			display_file(fd);
	}
	return (0);
}
