/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 23:48:17 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/11 17:12:48 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point_number = 0;
}

Fixed::Fixed(const int number)
{
    this->fixed_point_number = number<<8;
}

Fixed::Fixed(Fixed const& new_obj)
{
    this->fixed_point_number = new_obj.fixed_point_number;
}

Fixed::Fixed(const float number)
{
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
}

void    Fixed::setFixed(int num)
{
    this->fixed_point_number = num;
}

Fixed&  Fixed::operator = (const Fixed& fix)
{
    this->fixed_point_number = fix.fixed_point_number;
    return *this;
}

int     Fixed::getFixed() const
{
    return this->fixed_point_number;
}

Fixed   Fixed::operator + (const Fixed& fix)
{
    Fixed num;
    num.setFixed(this->fixed_point_number + fix.getFixed());
    return num;
}

Fixed  Fixed::operator * (const Fixed& fix)
{
    Fixed num;
    num.setFixed((this->getFixed() * fix.getFixed()) / 256);
    return num;
}

Fixed  Fixed::operator - (const Fixed& fix)
{
    Fixed num;
    num.setFixed(this->getFixed() - fix.getFixed());
    return num;
}

Fixed  Fixed::operator / (const Fixed& fix)
{
    Fixed num;
    num.setFixed(this->getFixed() / fix.getFixed());
    return num.getFixed();
}

bool    Fixed::operator==(const Fixed& fix1)
{
    if (this->getFixed() == fix1.getFixed()) return true;
    return false;
}

bool    Fixed::operator != (const Fixed& fix1)
{
    if (this->getFixed() != fix1.getFixed()) return true;
    return false;
}

bool    Fixed::operator < (const Fixed& fix1) const
{
    if (this->getFixed() < fix1.getFixed()) return true;
    return false;
}

bool    Fixed::operator > (const Fixed& fix1) const
{
    if (this->getFixed() > fix1.getFixed()) return true;
    return false;
}

bool    Fixed::operator >= (const Fixed& fix1) 
{
    if (this->getFixed() >= fix1.getFixed()) return true;
    return false;
}

bool    Fixed::operator <= (const Fixed& fix1)
{
    if (this->getFixed() <= fix1.getFixed()) return true;
    return false;
}

Fixed   Fixed::operator ++ ()
{
    Fixed num;
    num.fixed_point_number = ++this->fixed_point_number;
    return num;
}

Fixed   Fixed::operator++(int)
{
    Fixed num;
    num.fixed_point_number = this->fixed_point_number++;
    return num;
}

Fixed   Fixed::operator--()
{
    Fixed num;
    num.fixed_point_number--;
    return num;
}

Fixed   Fixed::operator--(int)
{
    Fixed num;
    num.fixed_point_number--;
    return num;
}

Fixed& Fixed::min(Fixed& fix1, Fixed& fix2)
{
    if (fix1 < fix2)
        return fix1;
    return fix2;
}

const Fixed& Fixed::min(const Fixed& fix1, const Fixed& fix2)
{
    if (fix1 < fix2)
        return fix1;
    return fix2;
}

Fixed& Fixed::max(Fixed& fix1, Fixed& fix2)
{
    if (fix1 > fix2)
        return fix1;
    return fix2;
}

const Fixed& Fixed::max(const Fixed& fix1, const Fixed& fix2)
{
    if (fix1 > fix2)
        return fix1;
    return fix2;
}

std::ostream & operator << (std::ostream &out, Fixed const & fixed)
{
    out << fixed.toFloat();
    return out;
}