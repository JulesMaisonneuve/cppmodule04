#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Animal;

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog(void);
		Dog(const Dog& D);
		Dog& operator=(const Dog &other);
		~Dog(void);
};

#endif
