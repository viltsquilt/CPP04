#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat& orig) : Animal(orig)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*orig.brain);
}

Cat&	Cat::operator=(const Cat& orig)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &orig)
	{
		Animal::operator=(orig);
		delete(brain);
		brain = new Brain(*orig.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete(brain);
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << type << " meow" << std::endl;
}

std::string	Cat::getType() const
{
	return (type);
}
