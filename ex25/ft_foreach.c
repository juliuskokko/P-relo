/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:51:14 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/15 13:39:36 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

void	f(int tab)
{
	printf("%d ", tab);
}

int		main(void)
{
	int array[5] = {1, 2, 3, 4, 5};
	ft_foreach(array, 5, f);
	return (0);
}
