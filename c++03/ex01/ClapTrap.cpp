//
// Created by Joshua Franceschi on 11/6/23.
//

#include "ClapTrap.h"

void    ClapTrap::setName(const std::string& name) {
    this->_name = name;
}

ClapTrap::ClapTrap() {
    this->_name = "default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "ClapTrap " << this->_name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap) {
    this->_name = claptrap._name;
    this->hitPoints = claptrap.hitPoints;
    this->energyPoints = claptrap.energyPoints;
    this->attackDamage = claptrap.attackDamage;
    std::cout << "ClapTrap " << this->_name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    this->_name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    this->energyPoints = 10;
    std::cout << "ClapTrap " << this->_name << " has been created!" << std::endl;

}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " has been destroyed!" << std::endl;
}

void    ClapTrap::attack(const std::string& target) {
    if (this->energyPoints > 0) {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints--;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    this->hitPoints -= amount;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->energyPoints > 0) {
        if (this->hitPoints == 10) {
            std::cout << "ClapTrap " << this->_name << " is already at full health!" << std::endl;
            return;
        }
        std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points of damage!" << std::endl;
        this->hitPoints += amount;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
}

std::string ClapTrap::getName( void ) const {
    return _name;
}

int ClapTrap::getAttackDamage( void ) const {
    return attackDamage;
}

void ClapTrap::setHitPoints(int hp) {
    this->hitPoints = hp;
}
void ClapTrap::setEnergyPoints(int ep) {
    this->energyPoints = ep;
}
void ClapTrap::setAttackDamage(int damage) {
    this->attackDamage = damage;
}