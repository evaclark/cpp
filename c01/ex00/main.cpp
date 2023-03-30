#include "Zombie.hpp"

int main()
{
	Zombie *zombie_boy;
	zombie_boy = newZombie("Zombie Heap");
	zombie_boy->announce();
	randomChump("Zombie Stack");
	delete zombie_boy;
}