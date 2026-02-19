#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& orig)
{
	type = orig.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& orig)
{
	type = orig.type;
	return (*this);
	std::cout << "Animal copy assignment operator called" << std::endl;
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
