#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	private:
	protected:
		std::string type;
		Animal(void);
	public:
		Animal(const Animal &s);
		Animal &operator=(const Animal &other);
		virtual void makeSound() const;
		void setType(std::string type);
		std::string getType(void) const;
		virtual ~Animal(void);
};

#endif
