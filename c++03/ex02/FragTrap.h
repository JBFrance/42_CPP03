//
// Created by Joshua Franceschi on 11/20/23.
//

#ifndef CPP03_FRAGTRAP_H
#define CPP03_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap {

private:


public:
    FragTrap();
    FragTrap(std::string _name);
    FragTrap( const FragTrap &p );
    FragTrap& operator=( const FragTrap &p );
    ~FragTrap();
    void attack(const std::string& target);
    void highFivesGuys(void);

};


#endif //CPP03_FRAGTRAP_H
