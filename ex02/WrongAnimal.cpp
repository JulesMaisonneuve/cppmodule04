#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->type = "Default WrongAnimal type";
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &s)
{
	*this = s;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*Screams in WrongAnimal*" << std::endl;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
	return ;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}
