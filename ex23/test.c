/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkokko <jkokko@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:45:38 by jkokko            #+#    #+#             */
/*   Updated: 2019/10/15 11:50:06 by jkokko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void set_point(t_point *point) {
  point->x = 42;
  point->y = 21;
}
int main(void) {
  t_point   point;
  set_point(&point);
	printf("x = %d, y = %d", point.x, point.y);
return (0); }