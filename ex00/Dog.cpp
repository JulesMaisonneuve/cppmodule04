#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	return (*this);
}

Dog::Dog(const Dog &s)
{
	*this = s;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}
