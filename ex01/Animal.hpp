#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain& B)
		{
			*this = B;
			std::cout << "Brain copy constructor called" << std::endl;
		}
		~Brain(void);
};

class Animal
{
	private:
	protected:
		std::string type;
	public:
		Animal(void);
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

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog(void);
		Dog(const Dog& D)
		{
			this->brain = NULL;
			*this = D;
		}
		Dog& operator=(const Dog &other);
		~Dog(void);
		
};

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat(void);
		Cat(const Cat& D)
		{
			this->brain = NULL;
			*this = D;
		}
		Cat& operator=(const Cat &other);
		~Cat(void);
};


#endif
