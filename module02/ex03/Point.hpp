/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:52:18 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/11 17:49:02 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {

    private :
        const Fixed x;
        const Fixed y;
        int     number;
    public :
        Point();
        Point(const float num1, const float num2);
        Point& operator=(const Point& obj);
        Point(const Point& obj);
        float getx();
        float gety();
        ~Point();                

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif