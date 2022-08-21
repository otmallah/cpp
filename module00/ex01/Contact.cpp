/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:50:05 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/21 12:57:49 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::set_firstname(std::string fname)
{
    first_name = fname;
}

void    Contact::set_lastname(std::string lname)
{
    last_name = lname;
}

void    Contact::set_nickname(std::string nname)
{
    nick_name = nname;
}

void    Contact::set_phone_number(std::string number)
{
    phone_number = number;
}

void    Contact::set_darkestsecret(std::string darkest)
{
    darkest_secret = darkest;
}

std::string    Contact::get_firstname()
{
    return first_name;
}

std::string    Contact::get_lastname()
{
    return last_name;
}

std::string    Contact::get_nickname()
{
    return nick_name;
}

std::string    Contact::get_phonenumber()
{
    return phone_number;
}

std::string    Contact::get_darkestsecret()
{
    return  darkest_secret;
}
