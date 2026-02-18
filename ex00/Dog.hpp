#include "Animal.hpp"

class Dog : public Animal
{
	private:
			std::string	type;
	public:
			Dog();
			Dog(const Dog& orig);
			Dog& operator=(const Dog& orig);
			~Dog();
			void	makeSound()const override;
			std::string&	getType() const;
};
