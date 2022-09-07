
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 23:44:33 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/05 16:38:53 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <fstream>

class Fixed {
    
    private :
        int fixed_point_number;
        static const int number = 8;
    
    public :
        Fixed();
        ~Fixed();
        Fixed(Fixed const& new_obj);
        Fixed(const int number);
        Fixed(const float number);
        Fixed& operator=(const Fixed& fix);
        float toFloat( void ) const;
        int toInt( void ) const;
        int getFixed();
};

std::ostream & operator << (std::ostream &out, Fixed const & fixed);
#endif