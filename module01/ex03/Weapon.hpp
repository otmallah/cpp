/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:13:05 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/19 19:18:02 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
    private :
        std::string type;
    public :
        const std::string& getType()
        {
            return type;
        }
        void    setType(std::string name)
        {
            type = name;
        }
};

Weapon  Weapo(std::string str);

#endif