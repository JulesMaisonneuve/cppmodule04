#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	return ;
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

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	return ;
}

WrongCat::~WrongCat(void)
{
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	return ;
}
