#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	private:
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const Animal& A);
		virtual void makeSound() const;
		void setType(std::string type);
		std::string getType(void) const;
		Animal& operator=(const Animal &other);
		virtual ~Animal(void);
};

#endif
