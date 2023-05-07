#ifndef BRAIN_HPP

# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain &b);
		virtual	~Brain();
		Brain	&operator=(const Brain &b);

		std::string	getIdea(int i);
		void	setIdea(std::string idea);
};

#endif