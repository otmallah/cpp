/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:10:11 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/22 13:56:41 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
    
    private :
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    
    public :
        void complain(std::string level);

};

#endif