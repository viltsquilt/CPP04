#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog& orig) : Animal(orig)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*orig.brain);
}

Dog&	Dog::operator=(const Dog& orig)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &orig)
	{
		Animal::operator=(orig);
		delete(brain);
		brain = new Brain(*orig.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete(brain);
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << type <<  " bark" << std::endl;
}

std::string	Dog::getType() const
{
	return (type);
}
