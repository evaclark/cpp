#ifndef DOG_HPP

# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog &d);
		virtual	~Dog();
		Dog	&operator=(const Dog &d);
};

#endif
