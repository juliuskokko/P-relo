/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:23:40 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/16 09:33:44 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
