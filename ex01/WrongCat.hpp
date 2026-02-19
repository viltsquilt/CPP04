#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
			WrongCat();
			WrongCat(const WrongCat& orig);
			WrongCat&	operator=(const WrongCat& orig);
			~WrongCat();
			void	makeSound() const;
			std::string	getType() const;
};
