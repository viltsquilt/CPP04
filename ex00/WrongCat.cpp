#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& orig)
{
	type = orig.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& orig)
{
	type = orig.type;
	std::cout << "WrongCat copy assignment operator called" << std::endl;
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
