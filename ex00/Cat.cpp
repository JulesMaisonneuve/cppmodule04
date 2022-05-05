#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	return (*this);
}

Cat::Cat(const Cat &s)
{
	*this = s;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}
