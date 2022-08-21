/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:55:36 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/19 15:58:59 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class   HumanB {
    public :
        Weapon weap;
        std::string name;
        void    attack()
        {
            std::cout << name << " attacks with their " << weap.getType() << std::endl;
        }
};

#endif