/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:09:46 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/07 21:26:02 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>

class Convert {
    
    private :
        float fnumber;
        int   intnumber;
        double dnumber;
        char    Cnumber;
    public :
        int     checker;
        size_t  find_type_of_number(std::string name);
        void    convert_to_float(std::string _name);
        void    convert_to_double(std::string _name);
        void    convert_to_another(std::string _name);
        void    display_all_info();
        void    setFnumber(float fnum);
        void    setDnumber(double dnum);
        void    setInumber(int  Inum);
        void    setCnumber(char Cnumber);
        float   getF();
        double  getD();
        int     getI();
        char    getC();
    
};


#endif