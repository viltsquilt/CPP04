#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& orig)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = orig.ideas[i];
}

Brain&	Brain::operator=(const Brain& orig)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &orig)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = orig.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
