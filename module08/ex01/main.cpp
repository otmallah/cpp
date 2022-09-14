/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:47:51 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/14 22:20:46 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
Span sp = Span(10);
sp.addNumber(1);
// std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;


return 0;
}