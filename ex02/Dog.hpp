#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
			Brain*	brain;
	public:
			Dog();
			Dog(const Dog& orig);
			Dog& operator=(const Dog& orig);
			~Dog();
			void	makeSound()const override;
			std::string	getType() const;
};
