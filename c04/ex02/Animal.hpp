#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string.h>

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

		void	makeSound() const;
};
#endif