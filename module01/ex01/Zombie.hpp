/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:28 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/18 13:55:01 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class   Zombie {
    private :
        std::string name;
    public :
        void    announce(void);
        void    setname(std::string n)
        {
            name = n;
        }
        ~Zombie()
        {
            std::cout << "zombie " << name << " has destroyed!" << std::endl;
        }
};

Zombie* zombieHorde( int N, std::string name );

#endif