/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:28:35 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/11 17:49:58 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point a(0,0);
	Point b(20,0);
	Point c(10,30);
	Point point(10.0,15);

	if (bsp(a, b, c, point))
		std::cout << "inside" << std::endl;
	else
		std::cout << "outside" << std::endl;
}