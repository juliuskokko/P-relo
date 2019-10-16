/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:23:40 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/14 14:35:17 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	if (nb < 1 || nb > 12)
		return (0);
	int i;
	int res;

	i = 1;
	res = i;
	while (i < nb)
	{
		res = res * (1 + i);
		i++;
	}
	return (res);
}

int		main(void)
{
	printf("%d\n", ft_iterative_factorial(-2));
	return (0);
}