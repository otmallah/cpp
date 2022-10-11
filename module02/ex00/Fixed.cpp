/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 23:02:19 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/25 16:38:15 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point_number = 0;
    std::cout << " Default constructor called " << std::endl;
}

Fixed::Fixed(const Fixed& new_obj)
{
    fixed_point_number = new_obj.fixed_point_number;
    std::cout << " Copy constructor called " << std::endl;
}

Fixed& Fixed::operator=(const Fixed& fix)
{
    fixed_point_number =  fix.fixed_point_number;
    std::cout << " Copy assignment operator called " << std::endl;
    return *this;
}

Fixed::~Fixed()
{
    std::cout << " Destructor called " << std::endl;
}

int     Fixed::getRawBits(void)
{
    std::cout <<  " getRawBits member function called " << std::endl;
    return this->fixed_point_number;
}

void    Fixed::setRawBits(int const raw)
{
    this->fixed_point_number = raw;
}