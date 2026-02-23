#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& orig)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	type = orig.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& orig)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &orig)
	{
		type = orig.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << type << " WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
