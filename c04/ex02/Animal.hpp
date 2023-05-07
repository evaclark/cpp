#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string.h>

// abstract class in c++ has at least one pure virtual function
// this is declared by assigning 0 to the end of a function definition
// by assigning the makesound virtual function to 0 the animal class
// is no longer instantiable

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		Animal(const Animal &a);
		virtual ~Animal();
		Animal	&operator=(const Animal &a);

		std::string	getType() const;
		void	setType(std::string t);

		virtual	void	makeSound() const = 0;
};
#endif