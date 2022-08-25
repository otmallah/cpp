/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <otmallah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:12:45 by otmallah          #+#    #+#             */
/*   Updated: 2022/08/25 20:13:22 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Vehicle {
  public:
    std::string brand = "Ford";
    void honk() {
      std::cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    std::string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  std::cout << myCar.brand + " " + myCar.model;
  return 0;
}