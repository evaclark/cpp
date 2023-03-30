#include "Zombie.hpp"

int main()
{
	Zombie *zombie_boyz;

	zombie_boyz = zombieHorde(5, "weezer");
	for (int i = 0; i < 5; i++)
	{
		zombie_boyz[i].announce();
	}
	delete[] zombie_boyz;
	return (0);
}