/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:21:38 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/25 16:37:58 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
    
    private :
        int fixed_point_number;
        static const int number = 8;
    
    public :
        Fixed();
        Fixed(const Fixed& new_obj);
        Fixed& operator=(const Fixed& fix);
        ~Fixed();
        int getRawBits( void );
        void setRawBits( int const raw );
};


#endif