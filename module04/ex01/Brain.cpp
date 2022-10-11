/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:22:07 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 15:20:15 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructore called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& new_obj)
{
    *(this->ideas) = *(new_obj.ideas);
    std::cout << "Copy Brain constructore called" << std::endl;
}

void    Brain::setIdeas(std::string string, int index)
{
    if (index >= 0 && index < 100)
        this->ideas[index] = string;
}

std::string     Brain::getIdeas(int index)
{
    if (index >= 0 && index < 100)
        return (this->ideas[index]);
    return NULL;
}

Brain& Brain::operator = (const Brain& old_obj)
{
    *(this->ideas) = *(old_obj.ideas);
    return *this;
}