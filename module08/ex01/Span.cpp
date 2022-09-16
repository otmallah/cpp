/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:35:21 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/16 18:47:25 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

unsigned int Span::_number;

Span::Span()
{
    _size = 0;
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

Span&   Span::operator=(const Span& obj)
{
    this->_number = obj._number;
    this->vec_int = obj.vec_int;
    this->_size = obj._size;
    std::begin();
    std::end();
    std::range_error();
    
    return *this;
}

void    Span::addNumber()
{
    srand(time(0));
    if (_size <= 0)
    {
        std::cout << "Empty container hh" << std::endl;
        std::exit(1);
    }
    for (unsigned int i = 0; i < _size; i++)
    {
        vec_int.push_back(rand());
        
    }
}

int     Span::shortestSpan()
{
    int find1;
    int find2;
    std::vector<int> vec;
    vec = vec_int;
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
    std::sort(vec.begin(), vec.end());
    it = vec.begin();
    while (it != vec.end() - 1)
    {
        if (a != _size)
        {
            find1 = vec.at(a + 1) - vec.at(a);
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
