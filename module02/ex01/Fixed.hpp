/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 23:44:33 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/25 19:18:37 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <tgmath.h>

class Fixed {
    
    private :
        int fixed_point_number;
        static const int number = 8;
    
    public :
        Fixed();
        Fixed(const Fixed& new_obj);
        Fixed(const int number);
        Fixed(const float number);
        Fixed& operator=(const Fixed& fix);
        //~Fixed();
        float toFloat( void );
        int toInt( void );
        int getFixed();
};


#endif