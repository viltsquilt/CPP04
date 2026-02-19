#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat& orig)
{
	std::cout << "Cat copy constructor called" << std::endl;
	type = orig.type;
	brain = new Brain(*orig.brain);
}

Cat&	Cat::operator=(const Cat& orig)
{
	type = orig.type;
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete(brain);
}

void	Cat::makeSound() const
{
	std::cout << type << " meow" << std::endl;
}

std::string	Cat::getType() const
{
	return (type);
}
