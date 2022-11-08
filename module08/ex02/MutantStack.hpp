/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:37:46 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/16 21:35:37 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
#define _MUTANTSTACK_HPP_

#include <iostream>
#include <stack>

template <typename T> class MutantStack : public std::stack<T>
{
    public :
        typename std::stack<T>::container_type::iterator    begin()
        {
            return this->c.begin();
        }
        typename std::stack<T>::container_type::iterator    end()
        {
            return this->c.end();
        }
};

#endif
