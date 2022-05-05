#include "Dog.hpp"

Dog::Dog(void)
{
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

Dog::~Dog(void)
{
	return ;
}
