/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:22:05 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/29 23:29:23 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class   Brain {

    private :
        std::string ideas[100];
    public :
        Brain();
        ~Brain();
        Brain(const Brain& new_obj);
        Brain& operator=(const Brain& old_obj);
        void    setIdeas(std::string string, int index);
        std::string    getIdeas(int index);

};


#endif