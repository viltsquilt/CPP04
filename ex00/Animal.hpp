#pragma once

#include <iostream>

class Animal
{
	protected:
			std::string	type;
	public:
			Animal();
			Animal(const Animal& orig);
			Animal& operator=(const Animal& orig);
			~Animal();
			virtual void	makeSound() const;
			std::string	getType() const;
};

