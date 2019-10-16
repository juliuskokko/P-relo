/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:19:48 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/14 14:23:26 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a = 5;
	int b = 3;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("div: %d mod: %d\n", div, mod);
	return (0);
}