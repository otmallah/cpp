/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:23:56 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/22 16:39:58 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl obj;

    obj.complain("DEBUG");
    obj.complain("INFO");
    obj.complain("WARNING");
    obj.complain("ERROR");
}