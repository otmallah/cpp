/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:52:18 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/10 22:49:11 by otmallah         ###   ########.fr       */
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
    public :
        Point();
        Point(const float num1, const float num2);
        Point& operator=(const Point& obj);
        Point(const Point& obj);
        const Fixed getx() const;
        const Fixed gety() const;
        ~Point();                

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif