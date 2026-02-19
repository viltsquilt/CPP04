#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main()
{
	const int		n = 2;
	Animal	**herd = new Animal*[n];

	for (int i = 0; i < n; i++)
	{
		if (i < n / 2)
		{
			herd[i] = new Cat();
		}
		else
		{
			herd[i] = new Dog();
		}
	}	
	for (int j = 0; j < n; j++)
		herd[j]->makeSound();
	for (int k = 0; k < n; k++)
		delete herd[k];
	delete[] herd;
	return (0);
}
