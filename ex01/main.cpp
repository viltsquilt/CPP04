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

	std::cout << "\n";
	std::cout << "Dog A:" << std::endl;
	Animal* A = new Dog();
	std::cout << "\n";
	std::cout << "Dog B:" << std::endl;
	std::cout << "\n";
	Animal* B = new Dog();
	std::cout << "\n";
	std::cout << "Dog C:" << std::endl;
	std::cout << "\n";
	Dog*    C = new Dog();
	std::cout << "\n";
	std::cout << "Dog D:" << std::endl;
	std::cout << "\n";
	Dog*    D = new Dog(*C);
	std::cout << "\n";
	std::cout << "Animal *A = Animal *B:" << std::endl;
	std::cout << "\n";
	*A = *B;
	std::cout << "\n";
	std::cout << "Dog *D = Dog *C:" << std::endl;
	std::cout << "\n";
	*D =*C;

	delete(A);
	delete(B);
	delete(C);
	delete(D);

	return (0);
}
