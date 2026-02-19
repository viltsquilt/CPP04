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
			virtual ~Animal();
			virtual void	makeSound() const = 0;
			std::string	getType() const;
};

