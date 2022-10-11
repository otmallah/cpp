/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:37:19 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/24 18:49:48 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
    private :
        Weapon& weap;
        std::string name;
    public :
        void    attack();
        HumanA(std::string str, Weapon& weap1);    
};

#endif