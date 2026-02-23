#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& orig) : WrongAnimal(orig)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& orig)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &orig)
	{
		WrongAnimal::operator=(orig);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << type << " WrongCat sound" << std::endl;
}

std::string	WrongCat::getType() const
{
	return (type);
}
