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
    this->type = D.type;
	this->brain = new Brain(*(D.brain));
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

Brain *Cat::getBrain() const
{
	return (this->brain);
}

Cat::~Cat(void)
{
	std::cout << "[Cat] destructor called" << std::endl;
	delete this->brain;
	return ;
}
