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
		Animal(const Animal& A)
		{
			*this = A;
		}
		void makeSound() const
		{
			if (type == "Cat")
				std::cout << "Meow" << std::endl;
			else if (type == "Dog")
				std::cout << "Woof Woof" << std::endl;
			else
				std::cout << "*Inaudible sound*" << std::endl;
		};
		void setType(std::string type);
		std::string getType(void) const;
		Animal& operator=(const Animal &other);
		virtual ~Animal(void);
};

#endif
