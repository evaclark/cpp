#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal	*array[8];
	
	for (int i = 0; i < 5; i ++)
	{
		Dog *dog = new Dog();
		dog->getBrain()->setIdea("	wow i can think??");
		std::cout << dog->getBrain()->getIdea(1) << std::endl;
		array[i] = dog;
	}

	for (int i = 5; i < 9; i++)
	{
		Cat *cat = new Cat();
		cat->getBrain()->setIdea("	im a cat whattttt");
		std::cout << cat->getBrain()->getIdea(1) << std::endl;
		array[i] = cat;
	}

	for (int i = 0; i < 8; i++)
	{
		delete array[i];
	}

	std::cout << "\n" << "Testing copy constructor" << std::endl;
	
	Dog puppy;

	puppy.getBrain()->setIdea("	im still a little guy");
	std::cout << puppy.getBrain()->getIdea(1) << std::endl;
	Dog bigboy	= Dog(puppy);
	std::cout << bigboy.getBrain()->getIdea(1) << std::endl;
	
	return 0;
}