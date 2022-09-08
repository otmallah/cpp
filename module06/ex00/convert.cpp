/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:14:45 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/07 21:26:36 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

size_t     Convert::find_type_of_number(std::string number)
{
    size_t  found;
    found = number.find("f");
    if (found != std::string::npos) 
        return 1;
    found = number.find(".");
    if (found != std::string::npos) 
        return 2;
    return 0;
}

void    Convert::convert_to_float(std::string _name)
{
    float convert_number = std::stof(_name); 
    setFnumber(static_cast<float>(convert_number));
    setInumber(static_cast<int>(convert_number)); 
    setDnumber(static_cast<double>(convert_number));
    setCnumber(static_cast<char>(convert_number));
}

void    Convert::convert_to_double(std::string _name)
{
    double convert_number = std::stod(_name); 
    setFnumber(static_cast<float>(convert_number));
    setInumber(static_cast<int>(convert_number)); 
    setDnumber(static_cast<double>(convert_number));
    setCnumber(static_cast<char>(convert_number));
}


void    Convert::convert_to_another(std::string _name)
{
    int convert_number;
    try {
        convert_number = std::stoi(_name);
    }
    catch (std::out_of_range)
    { 
        checker = 1;
    }
    setFnumber(static_cast<float>(convert_number));
    setInumber(static_cast<int>(convert_number)); 
    setDnumber(static_cast<double>(convert_number));
    setCnumber(static_cast<char>(convert_number));
}

void    Convert::display_all_info()
{
    int k = 0;
    if (getC() < 32)
        std::cout << "Char :" << "Non displayable" << std::endl;
    else
        std::cout << "Char :" << "'" << this->getC() << "'" << std::endl;
    if (getI() == std::numeric_limits<int>::max() || getI() == std::numeric_limits<int>::min())
    {
        k = 1;
        std::cout << "int :" << "impossible" << std::endl;
    }
    else
        std::cout << "int :" << this->getI() << std::endl;
    if (checker == 1)
    {
        std::cout << "int :" << "impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        checker = 0;
        return; 
    }
    std::cout << std::fixed <<std::setprecision(1) <<"float :" << this->getF() << "f" << std::endl;
    std::cout << "double :" << this->getD() << std::endl;
}


void    Convert::setCnumber(char Cnumber)
{
    this->Cnumber = Cnumber;
}

void    Convert::setDnumber(double  dnum)
{
    this->dnumber = dnum;
}

void    Convert::setFnumber(float fnum)
{
    this->fnumber = fnum;
}

void    Convert::setInumber(int Inum)
{
    this->intnumber = Inum;
}

float   Convert::getF()
{
    return this->fnumber;
}

int     Convert::getI()
{
    return this->intnumber;
}

double  Convert::getD()
{
    return this->dnumber;
}

char    Convert::getC()
{
    return this->Cnumber;
}