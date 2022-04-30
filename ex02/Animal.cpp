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

Cat::Cat(void)
{
	std::cout << "[Cat] constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return ;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*other.brain);
    return *this;
}

Cat::~Cat(void)
{
	std::cout << "[Cat] destructor called" << std::endl;
	delete this->brain;
	return ;
}

Dog::Dog(void)
{
	std::cout << "[Dog] constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this == &other)
		return *this;
	this->type = other.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*other.brain);
    return *this;
}

Dog::~Dog(void)
{
	std::cout << "[Dog] destructor called" << std::endl;
	delete this->brain;
	return ;
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
