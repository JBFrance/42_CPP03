//
// Created by Joshua Franceschi on 11/20/23.
//

#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
    setName("default");
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap( std::string _name ) : ClapTrap( _name ) {
    std::cout << "FragTrap name constructor called" << std::endl;
    _name = "default";
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap( const FragTrap &p ) : ClapTrap( p ) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap &p ) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &p) {
        ClapTrap::operator = (p);
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target) {
    energyPoints -= 1;
    if (energyPoints < 0) {
        std::cout << "FragTrap " << _name <<  "doesn't have energy points" << std::endl;
        energyPoints += 1;
    }
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << attackDamage << "  points of damage!" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << _name << " come on, high fives guys! guys?" << std::endl;
}