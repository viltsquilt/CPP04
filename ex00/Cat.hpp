#include "Animal.hpp"

class Cat : public Animal
{
	private:
			std::string	type;
	public:
			Cat();
			Cat(const Cat& orig);
			Cat& operator=(const Cat& orig);
			~Cat();
			void	makeSound()const override;
			std::string&	getType() const;
};
