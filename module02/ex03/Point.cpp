/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:55:52 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/11 17:49:18 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0),y(0)
{
    number = 0;
}

Point::Point(const float num1, const float num2):x(num1),y(num2)
{
}

Point::Point(const Point& obj):x(obj.x),y(obj.y)
{
}

Point& Point::operator=(const Point& obj)
{
    this->number = obj.number;
    return *this;
}

Point::~Point()
{
    
}

float     Point::getx() 
{
    return x.toFloat();
}

float     Point::gety() 
{
    return y.toFloat();
}

