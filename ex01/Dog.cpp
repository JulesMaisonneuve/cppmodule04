#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "[Dog] constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(const Dog& D)
{
    this->brain = NULL;
    *this = D;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	this->brain = other.brain;
	// this->type = other.type;
	// if (this->brain)
	// 	delete this->brain;
	// this->brain = new Brain(*other.brain);
    return *this;
}

Dog::~Dog(void)
{
	std::cout << "[Dog] destructor called" << std::endl;
	delete this->brain;
	return ;
}
