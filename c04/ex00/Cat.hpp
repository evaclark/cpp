#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:
		Cat();
		Cat(const Cat &c);
		virtual ~Cat();
		Cat	&operator=(const Cat &c);
};

#endif