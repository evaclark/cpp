#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &s);
        ~ScavTrap();

        void attack(const std::string &target);
        void guardGate();

        ScavTrap    &operator=(const ScavTrap &s);
};

#endif