/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:32:46 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/21 12:57:18 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
    private :
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    
    public :
        
        void    set_firstname(std::string fname);
        void    set_lastname(std::string lname);
        void    set_nickname(std::string nname);
        void    set_phone_number(std::string number);
        void    set_darkestsecret(std::string darkest);

        std::string    get_firstname(void);
        std::string    get_lastname(void);
        std::string    get_nickname(void);
        std::string    get_phonenumber(void);
        std::string    get_darkestsecret(void);
};

#endif