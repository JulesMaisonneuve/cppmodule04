#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "[Cat] constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return ;
}

Cat::Cat(const Cat& D)
{
    this->brain = NULL;
    *this = D;
}

Cat& Cat::operator=(const Cat &other)
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

Cat::~Cat(void)
{
	std::cout << "[Cat] destructor called" << std::endl;
	delete this->brain;
	return ;
}
