/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:28:35 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/25 19:20:48 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a.getFixed() << std::endl;
    //std::cout << "b is " << b.getFixed() << std::endl;
    // std::cout << "c is " << c.getFixed() << std::endl;
    // std::cout << "d is " << d.getFixed() << std::endl;
}