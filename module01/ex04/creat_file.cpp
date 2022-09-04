/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_file.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 22:14:46 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/04 11:17:23 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "creat_file.hpp"

myFile::myFile():i(0),k(0)
{}

myFile::~myFile()
{}

void    myFile::add(std::string filename, std::string s1, std::string s2)
{
    std::ifstream   myFile1;
    secname = filename + ".replace";
    std::ofstream myFile2;

    myFile1.open(filename);
    if (!myFile1)
    {
        std::cout << "<" << filename << ">" << " not found" << std::endl;
        return;
    }
    myFile2.open(secname);
    while (getline(myFile1, str))
    {
        found = str.find(s1);
        while (found != std::string::npos)
        {
            string = str.substr(i, found);
            myFile2 << string;
            myFile2 << s2;
            i = found + s1.size();
            string = str.substr(i);
            str = string;
            found = str.find(s1);
            i = 0;
            if (found == std::string::npos)
            {
                k = 1;
                myFile2 << string << std::endl;
            }
        }
        if (found == std::string::npos && k != 1)
            myFile2 << str << std::endl;
        k = 0;
    }
    //std::cout << "<" << filename << ">" << " not found" << std::endl;

    myFile1.close();
    myFile2.close();
}
