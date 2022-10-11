/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:11:20 by otmallah          #+#    #+#             */
/*   Updated: 2022/09/17 17:12:44 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;

    //wrong animal

    const WrongAnimal* meta1 = new WrongAnimal();
    const   WrongAnimal* j1 = new WrongDog();
    const   WrongAnimal* i1 = new WrongCat();
    std::cout << j1->getType() << " " << std::endl;
    std::cout << i1->getType() << " " << std::endl;
    i1->makeSound(); //will output the cat sound!
    j1->makeSound();
    meta1->makeSound();

    delete j1;
    delete i1;
    delete meta1;
    return 0;
}