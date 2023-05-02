#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat(const WrongCat &wc);
		virtual	~WrongCat();

		WrongCat	&operator=(const WrongCat &wc);
};

#endif