/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:18:42 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/09 21:59:33 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

class pok{
    private :
        int *arr;
    public :
        pok()
        {
            arr = new int[5];
            for (int i = 0; i < 5; i++)
            {
                arr[i] = 0;
            }
        }
        void get()
        {
            for (int i = 0; i < 5; i++)
            {
                
            }
            
        }
};


int main(int, char**)
{
    Array<int> obj(5);
    Array<int> tmp(obj);
    obj[0] = 20;
    tmp[0] = 50;
    std::cout << tmp.size() << std::endl;  
}