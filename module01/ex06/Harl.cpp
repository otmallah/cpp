/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:10:20 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/04 15:30:32 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include    "Harl.hpp"

void    Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void    Harl::info()
{
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldnt be asking for more!\n" << std::endl;
}

void    Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error()
{
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string  name[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while (i < 4)
    {
        if (name[i].compare(level) == 0)
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            debug();
            info();
            warning();
            error();
            break;
        case 1:
            info();
            warning();
            error();
            break;
        case 2:
            warning();
            error();
            break;
        case 3:
            error();
            break;
        default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    
}