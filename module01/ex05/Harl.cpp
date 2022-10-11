/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:00:44 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/22 16:39:00 by otmallah         ###   ########.fr       */
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
    void (Harl::*fun[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    std::string test[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (i < 4)
    {
        if (test[i].compare(level) == 0)
            (this->*fun[i])();
        i++;
    }
    
}