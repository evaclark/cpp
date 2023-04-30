#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string.h>

class ClapTrap
{
    protected:
        std::string name;
        int hit;
        int energy;
        int att;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &c);
        ~ClapTrap();

        ClapTrap    &operator=(const ClapTrap &c);

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName() const;
        void setName(std::string name);

        int getHit() const;
        void    setHit(int hit);
        
        int getEnergy() const;
        void    setEnergy(int energy);

        int getAttack() const;
        void    setAttack(int attack);

        bool    energyCheck(int energy);
        bool    hitCheck(int hit);

};

#endif