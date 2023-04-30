
#include "ScavTrap.hpp"

int main ()
{
	ClapTrap	clappy("steve");
	ScavTrap	scav("barry cornelius");

	scav.setName("bob");

	clappy.attack(scav.getName());
	scav.takeDamage(clappy.getAttack());
	scav.attack(clappy.getName());
	clappy.takeDamage(scav.getAttack());

	clappy.beRepaired(200);
	scav.beRepaired(5);

	clappy.takeDamage(6);
	scav.takeDamage(100);

    scav.guardGate();

	return (0);
}