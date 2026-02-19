#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
			Brain*	brain;
	public:
			Cat();
			Cat(const Cat& orig);
			Cat& operator=(const Cat& orig);
			~Cat();
			void	makeSound()const override;
			std::string	getType() const;
};
