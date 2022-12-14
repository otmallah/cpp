/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:35:47 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/23 17:42:39 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::SEARCH()
{
    int a = 0;
    std::cout << "  Index    | " << " first name   |" <<  " last name "<<  "    |nick name "<<std::endl;
    std::cout << "-----------------------------------------------------" << std::endl;
    while (a < count)
    {
        std::cout << std::setfill (' ') << std::setw(10) << a << " | ";
        if (contact[a].get_firstname().size() > 10)
            std::cout << std::setfill (' ') << std::setw(10) << contact[a].get_firstname().substr(0, 10) << "." << " | ";
        else
            std::cout << std::setfill (' ') << std::setw(10) << contact[a].get_firstname() << " | ";
        if (contact[a].get_lastname().size() > 10)
            std::cout << std::setfill (' ') << std::setw(10) << contact[a].get_lastname().substr(0, 10) << "." << " | ";
        else
            std::cout << std::setfill (' ') << std::setw(10) << contact[a].get_lastname() << " | " ;
        if (contact[a].get_nickname().size() > 10)
            std::cout << std::setfill (' ') << std::setw(10) << contact[a].get_nickname().substr(0, 10) << "." << std::endl;
        else
            std::cout << std::setfill (' ') << std::setw(10) << contact[a].get_nickname() << std::endl;
        a++;
    }
    std::cout << "enter the index : ";
    std::cin >> num;
    while (std::cin.fail())
    {
        std::cout << "is not an integer" << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "enter the index : ";
        std::cin >> num;
    }
    std::cin.clear();
    std::cin.ignore();
    if (num < 0 || num > 7)
        std::cout << "index is out of range or wrong" << std::endl;
    else if (num >= 0 && num <= 7)
    {
        std::cout << "index      : " << num  <<std::endl ;
        std::cout << "First name : " << contact[num].get_firstname() << std::endl;
        std::cout << "Last name  : " << contact[num].get_lastname() << std::endl;
        std::cout << "nick name  : " << contact[num].get_nickname() << std::endl;
        std::cout << "phone number  : " << contact[num].get_phonenumber() << std::endl;
        std::cout << "darkest secret  : " << contact[num].get_darkestsecret() << std::endl;
    }
}


void    PhoneBook::ADD()
{
    if (i == 8)
        i = 0;
    std::cout << "Enter First name : ";
    getline(std::cin, line);
    contact[i].set_firstname(line);
    std::cout << "Enter Last name : ";
    getline(std::cin, line);
    if (!line.empty())
        contact[i].set_lastname(line);
    std::cout << "Enter nick name : ";
    getline(std::cin, line);
    if(!line.empty())
        contact[i].set_nickname(line);
    std::cout << "Enter number phone : ";
    getline(std::cin, line);
    if(!line.empty()) 
        contact[i].set_phone_number(line);
    std::cout << "Enter number darkest secret : ";
    if(!line.empty())
        getline(std::cin, line);
    contact[i].set_darkestsecret(line);
    if (contact[i].get_firstname().size() == 0 || contact[i].get_lastname().size() == 0
        || contact[i].get_nickname().size() == 0 || contact[i].get_darkestsecret().size() == 0
        || contact[i].get_phonenumber().size() == 0)
    {
        if (count < 8)
        {
            contact[i].set_darkestsecret(" ");
            contact[i].set_nickname(" ");
            contact[i].set_firstname(" ");
            contact[i].set_lastname(" ");
            contact[i].set_phone_number(" ");
        }
        check = 2;
    }
    else
        check = 1;
}
