#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog& orig)
{
	std::cout << "Dog copy constructor called" << std::endl;
	type = orig.type;
	brain = new Brain(*orig.brain);
}

Dog&	Dog::operator=(const Dog& orig)
{
	type = orig.type;
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete(brain);
}

void	Dog::makeSound() const
{
	std::cout << type <<  " bark" << std::endl;
}

std::string	Dog::getType() const
{
	return (type);
}
