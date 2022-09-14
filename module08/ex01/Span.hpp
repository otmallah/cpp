/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:30:12 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/14 22:00:25 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
#define _SPAN_HPP_

#include <iostream>
#include <vector>

class Span {
    
    private:
        static unsigned int          _number;
        std::vector<int>    vec_int;
        unsigned int        _size;
    public :
        Span();
        Span(unsigned int N);
        ~Span();
        // Span& operator=(const Span&);
        void    addNumber(int);
        int     shortestSpan();
        int     longestSpan();    
};


#endif