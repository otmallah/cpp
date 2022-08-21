/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:52:39 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/19 16:53:17 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class   HumanA {
    public :
        Weapon weap;
        std::string name;
        void    attack()
        {
            std::cout << name << " attacks with their " << weap.getType() << std::endl;
        }
        HumanA(std::string str, Weapon wee)
        {
            name = str;
            weap = wee;
        }
};

#endif