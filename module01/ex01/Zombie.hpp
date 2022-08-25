/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:01:28 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/22 18:17:37 by otmallah         ###   ########.fr       */
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
        void    setname(std::string name1);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif