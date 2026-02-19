#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete(i);
	delete(j);
	delete(meta);

	const WrongAnimal*	wanimal = new WrongAnimal();
	const WrongAnimal*	wcat = new WrongCat();

	std::cout << wcat->getType() << " " << std::endl;
	wcat->makeSound();
	wanimal->makeSound();

	delete(wcat);
	delete(wanimal);

	return (0);
}
