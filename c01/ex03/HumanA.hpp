#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon	*pike;
	
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void	setName(std::string newname);
		std::string	getName(void);
		void	attack(void);

};

#endif