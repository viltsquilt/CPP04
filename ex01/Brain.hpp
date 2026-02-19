#pragma once

#include <iostream>

class Brain
{
	private:
			std::string	ideas[100];
	public:
			Brain();
			Brain(const Brain& orig);
			Brain&	operator=(const Brain& orig);
			~Brain();
};
