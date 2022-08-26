#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

    private :
        std::string name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    
    public:
        ClapTrap(std::string name);
        ClapTrap();
        ClapTrap(const ClapTrap& new_obj);
        ClapTrap&  operator=(ClapTrap);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

}


#endif