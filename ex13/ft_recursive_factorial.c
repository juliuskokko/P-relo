/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:35:24 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/16 09:39:37 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
