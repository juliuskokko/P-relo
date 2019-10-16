/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:11:49 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/16 14:14:14 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_check_arg(int ac)
{
	if (ac == 2)
		return (1);
	else if (ac == 1)
		write(2, "File name missing.\n", 19);
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	return (0);
}

int		ft_display_file(char **av)
{
	char	buf[100 + 1];
	int		ret;
	int		fd;

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while ((ret = read(fd, buf, 100)))
	{
		buf[ret] = '\0';
		write(1, buf, ft_strlen(buf));
	}
	buf[ret] = '\0';
	if (close(fd) == -1)
		return (0);
	return (1);
}

int		main(int argc, char **argv)
{
	if (!ft_check_arg(argc))
		return (1);
	if (!ft_display_file(argv))
		return (1);
	return (0);
}
