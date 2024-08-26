//
// Created by Joshua Franceschi on 11/6/23.
//

#ifndef CPPPROJECT_CLAPTRAP_H
#define CPPPROJECT_CLAPTRAP_H
#include <iostream>


class ClapTrap {
protected:
    std::string _name;
    int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& claptrap);
    ~ClapTrap();
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    setName(const std::string& name);
    int    getAttackDamage( void ) const;
    std::string    getName( void ) const;
    void setHitPoints(int hp);
    void setEnergyPoints(int ep);
    void setAttackDamage(int damage);
};


#endif //CPPPROJECT_CLAPTRAP_H
