#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon *pike;

	public:
		HumanB(std::string input);
		~HumanB(void);
		void	setName(std::string newname);
		std::string getName(void);
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif