/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tes.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:29:40 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/21 16:42:18 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class test {
    private :
        void    print(void);
        void    print1(void);
        void    print2(void);
        void    print3(void);
    public :
        void    get(void);
};

void    test::print1()
{
    std::cout << "ha ana1\n";
}

void    test::print2()
{
    std::cout << "ha ana2\n";
}

void test::get()
{
    int a = 50;
    switch (a)
    {
    case 1:
        print1();
        break;
    case 5:
        print2();
        break;
    default:
        std::cout << "mal9ina walo \n";
    }
}

int main()
{
    test te;

    te.get();
}