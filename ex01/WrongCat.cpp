#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "Default WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
    return ;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &s)
{
	*this = s;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}