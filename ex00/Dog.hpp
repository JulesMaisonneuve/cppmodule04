#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Animal;

class Dog : public Animal
{
	private:
	public:
		Dog(void);
		Dog &operator=(const Dog &other);
		Dog(const Dog &s);
		virtual ~Dog(void);
		
};

#endif
