#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name)
{
    this->name = name;
    std::cout << "Constructore called " << std::endl;
}

ClapTrap::ClapTrap()
{
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0; 
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;
}

void    ClapTrap::attack( const std::string& target)
{
    if (this->Hit_points == 0 || this->Energy_points == 0)
        std::cout << "ClapTrap can't do nothing!" << std::endl;
    else
    {
        this->Attack_damage = this->Hit_points;
        this->Hit_points = 0;
        this->Energy_points--;
       std::cout << "ClapTrap" << this->name << "attacks"  << target << ", causing " << this->Attack_damage << "points of damage!" << std::endl;
    }
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << "ClapTrap" << this->name << "attacks"  << amount << ", causing " << this->Attack_damage << "points of damage!" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount)
{
    if (this->Energy_points == 0)
        std::cout << "ClapTrap can't do nothing!" << std::endl;
    else
    {
        this->Hit_points = amount;
        this->Energy_points--;
        std::cout << "ClapTrap" << this->name << "attacks"  << amount << ", causing " << this->Attack_damage << "points of damage!" << std::endl;
    }
}