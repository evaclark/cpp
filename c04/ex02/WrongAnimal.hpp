#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &wa);
		virtual	~WrongAnimal();

		WrongAnimal	&operator=(const WrongAnimal &wa);

		std::string	getType() const;
		void	setType(std::string t);

		void	makeSound() const;
};

#endif