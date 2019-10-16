/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:25:06 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/15 10:49:47 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_lstr(char **argv)
{
	int res;
	int i;

	i = 1;
	res = 0;
	while (argv[i] != '\0')
	{
		if (ft_strlen(argv[i]) > res)
			res = ft_strlen(argv[i]);
		i++;
	}
	return (res);
}

void	ft_sort(int argc, char **argv, char *tmp)
{
	int i;
	int y;

	y = 1;
	while (y < argc - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if ((ft_strcmp(argv[i], argv[i + 1]) > 0))
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		y++;
	}
}

int		main(int argc, char **argv)
{
	char tmp[ft_lstr(argv)];
	int i;

	i = 1;
	ft_sort(argc, argv, tmp);
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
