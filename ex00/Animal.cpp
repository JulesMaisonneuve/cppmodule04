#include "Animal.hpp"

Animal::Animal(void)
{
	return ;
}

Animal& Animal::operator=(const Animal &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	return (*this);
}

Animal::Animal(const Animal &s)
{
	*this = s;
}

void Animal::makeSound() const
{
	if (type == "Cat")
		std::cout << "Meow" << std::endl;
	else if (type == "Dog")
		std::cout << "Woof Woof" << std::endl;
	else
		std::cout << "*Inaudible sound*" << std::endl;
}

void Animal::setType(std::string type)
{
	this->type = type;
	return ;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

Animal::~Animal(void)
{
	return ;
}
