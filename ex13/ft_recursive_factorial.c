/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:35:24 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/14 14:41:21 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	if (nb < 1 || nb > 12)
		return (0);
	int res;

	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}

int		main(void)
{
	printf("%d\n", ft_recursive_factorial(-1));
	return (0);
}
