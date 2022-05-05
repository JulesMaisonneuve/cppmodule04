#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "[Animal] constructor called" << std::endl;
	return ;
}

void Animal::setType(std::string type)
{
	this->type = type;
	return ;
}

Animal& Animal::operator=(const Animal &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
    return *this;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

Animal::~Animal(void)
{
	std::cout << "[Animal] destructor called" << std::endl;
	return ;
}
