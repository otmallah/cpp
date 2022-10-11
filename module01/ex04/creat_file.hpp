/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_file.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:12:34 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/04 11:10:58 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CREAT_FILE_HPP
#define CREAT_FILE_HPP

#include <iostream>
#include <fstream>
#include <string.h>

class myFile {
    private :
        int i;
        int k;
        std::string str;
        std::string secname;
        size_t      found;
        std::string string;
    public :
        myFile();
        ~myFile();
        void        add(std::string filename, std::string s1, std::string s2);
};

#endif