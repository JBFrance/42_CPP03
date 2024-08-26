#include "ScavTrap.hpp"

int main() {

    ClapTrap a("Lorelei");
    ClapTrap b("Handsome Jack");
    ScavTrap c("Mordecai");
    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.beRepaired(5);
    b.attack(a.getName());
    c.guardGate();
    a.takeDamage(b.getAttackDamage());
    a.beRepaired(7);

    c.attack(a.getName());
    c.takeDamage(a.getAttackDamage());
    c.beRepaired(10);

    return 0;
}