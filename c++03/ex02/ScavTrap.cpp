
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
    setName("default");
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap( std::string _name ) : ClapTrap( _name ) {
    std::cout << "ScavTrap name constructor called" << std::endl;
    _name = "default";
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap( const ScavTrap &p ) : ClapTrap( p ) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap &p ) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &p) {
        ClapTrap::operator = (p);
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    energyPoints -= 1;
    if (energyPoints < 0) {
        std::cout << "ScavTrap " << _name <<  "doesn't have energy points" << std::endl;
        energyPoints += 1;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << attackDamage << "  points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << _name << " is now in Gate keeper mode" << std::endl;
}