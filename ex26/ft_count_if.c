/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 13:39:58 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/15 14:09:12 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int res;

	res = 0;
	i = 1;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			res++;
		i++;
	}
	return (res);
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

int		f(char *tab)
{
	if (ft_strlen(tab) == 5)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	printf("%d\n", ft_count_if(argv, f));
	return (0);
}
