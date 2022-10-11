/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 20:47:17 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/20 21:22:57 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
    srand ( time(NULL) );
    int randNumber = rand() % 3;
    if (randNumber == 0)
        return new A;
    if (randNumber == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
    B *b = dynamic_cast<B*>(p);
    C *c = dynamic_cast<C*>(p);
    if (a != NULL)
        std::cout << "type of pointer p is A" << std::endl;
    if (b != NULL)
        std::cout << "type of pointer p is B" << std::endl;
    if (c != NULL)
        std::cout << "type of poinetr p is C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "type of reference p is A" << std::endl;
        (void)a;
    }
    catch(...)
    {
    }
    try
    {
        B& a = dynamic_cast<B&>(p);
        std::cout << "type of refrence p is B" << std::endl;
        (void)a;
    }
    catch(...)
    {
    }
    try
    {
        C& a = dynamic_cast<C&>(p);
        std::cout << "type of reference p is C" << std::endl;
        (void)a;
    }
    catch(...)
    {
    }
}


int main()
{
    Base *base = generate();
    identify(base);
    identify(*base);
}