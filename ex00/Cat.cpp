#include "Cat.hpp"

Cat::Cat(void)
{
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

Cat::~Cat(void)
{
	return ;
}
