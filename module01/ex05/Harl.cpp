/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:00:44 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/21 19:47:02 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Harl.hpp"

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*tes)() = &Harl::debug;
    void    (Harl::*tes1)() = &Harl::info;
    void    (Harl::*tes2)() = &Harl::warning;
    void    (Harl::*tes3)() = &Harl::error;

    if (level == "debug")
        (obj.*tes)();
    
}