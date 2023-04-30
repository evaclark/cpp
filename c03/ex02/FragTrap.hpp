#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &f);
		~FragTrap();

		void highFivesGuys(void);

		FragTrap	&operator=(const FragTrap &f);

		void	attack(const std::string &target);
};

#endif