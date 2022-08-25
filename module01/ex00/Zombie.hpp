/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:32:00 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/25 17:26:35 by otmallah         ###   ########.fr       */
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
        void    setname(std::string _name);
        ~Zombie();
};

void    randomChump(std::string name);
Zombie*     newZombie(std::string name);

#endif