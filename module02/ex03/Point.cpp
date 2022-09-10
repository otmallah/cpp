/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:55:52 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/10 22:54:20 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0),y(0)
{
}

Point::Point(const float num1, const float num2):x(num1),y(num2)
{
}

Point::Point(const Point& obj):x(obj.x),y(obj.y)
{
}

Point& Point::operator=(const Point& obj)
{
    *this = obj;
    return *this;
}

Point::~Point()
{
    
}

const Fixed     Point::getx() const
{
    return x;
}

const Fixed     Point::gety() const
{
    return y;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if ()
}