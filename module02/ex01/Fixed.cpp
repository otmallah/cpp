/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 23:48:17 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/06 13:01:10 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_point_number = number<<8;
}

Fixed::Fixed(Fixed const& new_obj)
{
    this->fixed_point_number = new_obj.fixed_point_number;
    std::cout << "Copy Constructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_point_number = roundf(number * (1 << 8));
}

float   Fixed::toFloat( void ) const
{
    return ((float) fixed_point_number / (float)(1 << 8));
}

int     Fixed::toInt( void ) const
{
    return ((int) fixed_point_number / (int)(1<<8));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&  Fixed::operator = (const Fixed& fix)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point_number = fix.fixed_point_number;
    return *this;
}

std::ostream & operator << (std::ostream &out, Fixed const & fixed)
{
    out << fixed.toFloat();
    return out;
}