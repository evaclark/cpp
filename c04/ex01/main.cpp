#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound(); //will output the cat sound!
	i->makeSound();

	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	const	WrongAnimal *a = new WrongAnimal();
	const	WrongAnimal *b = new WrongCat();

	std::cout << b->getType() << " " << std::endl;

	a->makeSound();
	b->makeSound();

	delete b;
	delete a;

	return 0;
}