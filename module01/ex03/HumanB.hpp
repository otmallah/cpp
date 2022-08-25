/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:44:59 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/25 12:10:06 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
    private :
        std::string name;
        Weapon *weap;
    public :
        void    attack();
        HumanB(std::string str);
        void    setWeapon(Weapon *weap);
        
};

#endif