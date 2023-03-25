#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

	private:
		int		n;
	
	public:
		Contact cont[8];
		int	get_n();
		void	set_n(int i);
	
};

#endif