/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:32:03 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/24 18:51:29 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string& getType( void );
        void    setType( std::string name );
        Weapon(std::string type);
};



#endif