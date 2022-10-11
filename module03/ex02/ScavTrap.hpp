/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:32:08 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/11 22:02:13 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public :
        ScavTrap();
        ScavTrap( std::string name );
        ~ScavTrap();
        ScavTrap(const ScavTrap& obj);
        ScavTrap& operator=(const ScavTrap& obj);
        void    attack( const std::string& target);
        void    guardGate();
};

#endif