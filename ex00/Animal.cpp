#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& orig)
{
	std::cout << "Animal copy constructor called" << std::endl;
	type = orig.type;
}

Animal&	Animal::operator=(const Animal& orig)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &orig)
	{
		type = orig.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << type << " Animal sound" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}
