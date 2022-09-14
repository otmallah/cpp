/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:35:21 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/14 22:20:39 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

unsigned int Span::_number;

Span::Span()
{
    
}

Span::Span(unsigned int N)
{
    _size = N;
}

Span::~Span()
{

}

void    Span::addNumber(int number)
{
    try{
        if (this->_number >= this->_size)
            throw std::exception();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << " : u can't add another element" <<std::endl;
        std::exit(0);
    }
    vec_int.push_back(number);
    this->_number++;
}

int     Span::shortestSpan()
{
    int find1;
    int find2;
    std::vector<int>::iterator it;
    size_t a = 0;
    try
    {
        if (vec_int.size() <= 1)
            throw std::exception();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " : waalo " << '\n';
        std::exit(0);
    }   
    std::sort(vec_int.begin(), vec_int.end());
    it = vec_int.begin();
    while (it != vec_int.end() - 1)
    {
        if (a != _size)
        {
            find1 = vec_int.at(a + 1) - vec_int.at(a);
            if (a == 0)
                find2 = find1;
            if (find1 < find2)
                    find2 = find1;
        }
        a++;
        it++;
    }
    return find2;
}

int     Span::longestSpan()
{
    int find1;
    int find2;
    try
    {
        if (vec_int.size() <= 1)
            throw std::exception();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " : waalo " << '\n';
        std::exit(0);
    }  
    find1 = *max_element(vec_int.begin(), vec_int.end());
    find2 = *min_element(vec_int.begin(), vec_int.end());
    return (find1 - find2);
}
