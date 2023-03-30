#include "Zombie.hpp"

//randomChump uses the stack which stores
//local variables, it is initialised 

void randomChump(std::string name)
{
	Zombie	randomChump;
	randomChump.set_name(name);
	randomChump.announce();
}