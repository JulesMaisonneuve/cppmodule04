#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->type = "Default Animal type";
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
	std::cout << "Animal destructor called" << std::endl;
	return ;
}
