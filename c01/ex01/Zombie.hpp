#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie();
		~Zombie();
		std::string	get_name(void);
		void	set_name(std::string newname);
		void	announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif