/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_file.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:12:34 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/20 21:10:21 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREAT_FILE_HPP
#define CREAT_FILE_HPP

#include <iostream>
#include <fstream>
#include <string.h>

class myFile {
    public :
        char        *finder;
        char        *sec_finder;
        std::string str;
        std::string secname; 
        void        add(std::string filename, std::string s1, std::string s2);
};

#endif