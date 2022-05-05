#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Animal;

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat(void);
		Cat(const Cat& D);
		Cat& operator=(const Cat &other);
		~Cat(void);
};

#endif
