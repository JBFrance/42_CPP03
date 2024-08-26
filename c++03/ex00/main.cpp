//
// Created by Joshua Franceschi on 11/6/23.
//
#include "ClapTrap.h"
int main()
{
    ClapTrap claptrap("Josh");
    ClapTrap claptrap2("claptrap");
    claptrap.attack("claptrap");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(3);
    claptrap.setName("Joshua");
    claptrap.attack("claptrap");
    claptrap2.takeDamage(1);
    claptrap2.takeDamage(1);
    claptrap2.takeDamage(1);
    claptrap2.takeDamage(1);
    claptrap2.beRepaired(3);
    return 0;
}