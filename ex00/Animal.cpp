#include "Animal.hpp"

Animal::Animal(void)
{
	return ;
}

void Animal::setType(std::string type)
{
	this->type = type;
	return ;
}

Cat::Cat(void)
{
	this->type = "Cat";
	return ;
}

Cat::~Cat(void)
{
	return ;
}

Dog::Dog(void)
{
	this->type = "Dog";
	return ;
}

Dog::~Dog(void)
{
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
