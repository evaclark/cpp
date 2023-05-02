#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &b)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = b.ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "Brain deconstructed" << std::endl;
}

Brain	&Brain::operator=(const Brain &b)
{
	while (int i = 0 < 100)
	{
		this->ideas[i] = b.ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea(int i)
{
	return (this->ideas[i]);
}

void	Brain::setIdea(std::string	idea)
{
	int	i = 1;
	while (!this->ideas[i].empty())
	{
		i++;
	}
	this->ideas[i] = idea;
}