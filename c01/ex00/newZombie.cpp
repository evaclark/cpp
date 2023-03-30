#include "Zombie.hpp"

// new operator denotes a request for memory allocation on
// the heap - initializes memory and returns the address
// of newly allocated memory to the pointer variable
// when using new to create an object of a class it
// uses the constructor of the class to initialize 
// the memory.

Zombie *newZombie(std::string name)
{
	Zombie *newZombie = new Zombie;
	newZombie->set_name(name);
	return (newZombie);
}