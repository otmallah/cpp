/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 15:11:40 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/11 16:44:04 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

float   calc_area(Point a, Point b, Point c)
{
    float r = (a.getx()*(b.gety() - c.gety()) + b.getx()*(a.gety() - c.gety()) + c.getx()*(a.gety() - b.gety())) / 2.0;
    if (r >= 0)
        return (r);
    return (r * -1);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float a0 = calc_area(a, b, c);
    float a1 = calc_area(b, c, point);
    float a2 = calc_area(c, a, point);
    float a3 = calc_area(a, b, point);
    return (a0 == (a1 + a2 + a3));
}