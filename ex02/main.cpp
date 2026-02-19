#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main()
{
	const Animal*	i = new Dog();
	const Animal*	j = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete(i);
	delete(j);

	std::cout << "\n";
	std::cout << "Dog A:" << std::endl;
	Animal*	A = new Dog();
	std::cout << "\n";
	std::cout << "Dog B:" << std::endl;
	std::cout << "\n";
	Animal*	B = new Dog();
	std::cout << "\n";
	std::cout << "Dog C:" << std::endl;
	std::cout << "\n";
	Dog*	C = new Dog();
	std::cout << "\n";
	std::cout << "Dog D:" << std::endl;
	std::cout << "\n";
	Dog*	D = new Dog(*C);
	std::cout << "\n";
	std::cout << "Dog *A = Dog *B:" << std::endl;
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
