/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 10:59:01 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/16 09:51:17 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
