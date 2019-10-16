/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:59:01 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/15 11:18:19 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;

	i = 0;
	if (max <= min)
		return (NULL);
	array = (int *)malloc(sizeof(int) * ((max - min)));
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

int		main(void)
{
	int i;
	int *array = ft_range(-150, 4);

	i = 0;
	while (i < 154)
	{
		printf("%d ", array[i]);
		i++;
	}
	return (0);
}
