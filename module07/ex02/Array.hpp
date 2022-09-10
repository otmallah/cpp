/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:04:29 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/10 14:41:42 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstring>

template <typename T> 
class Array 
{
    private:
        T *array;
        unsigned int _size;
    public :
        Array()
        {
            _size = 0;
            array = new T;
        }
        Array(unsigned int n)
        {
            _size = n;
            array = new T[n];
            memset(array, 0, sizeof(*array)*n);
        }
        Array(const Array& obj)
        {
            this->_size = obj._size;
            T *temp = new T[this->_size];
            this->array = new T[_size];
            for (unsigned int i = 0; i < this->_size; i++)
            {
                temp[i] = obj.array[i];
            }
            for (unsigned int i = 0; i < this->_size; i++)
            {
                this->array[i] = obj.array[i];
            }
            delete [] temp;
        }
        Array& operator=(const Array& obj)
        {
            this->_size = obj._size;
            T *temp = new T[this->_size];
            this->array = new T[_size];
            for (unsigned int i = 0; i < this->_size; i++)
            {
                temp[i] = obj.array[i];
            }
            for (unsigned int i = 0; i < this->_size; i++)
            {
                this->array[i] = temp[i];
            }
            delete [] temp;
        }
        int &operator[](unsigned int i)
        {
            if (i > this->_size)
                throw std::exception();
            return array[i];
        }
        unsigned int size() const {return this->_size;}
        void    get()
        {
            for (unsigned int i = 0; i < _size; i++)
            {
                std::cout << this->array[i] << std::endl;
            }
        }
        ~Array()
        {
            std::cout << "destructor called" << std::endl;
            delete [] array;
        }
};



#endif