/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 21:25:04 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/11 22:10:11 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public :
        FragTrap();
        FragTrap& operator=(const FragTrap& obj);
        FragTrap(const FragTrap& obj);
        FragTrap (std::string name);
        ~FragTrap();
        void    attack(const std::string& target);
        void    highFivesGuys(void);    
};

#endif