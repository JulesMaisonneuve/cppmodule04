#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain& B)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = B.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}

void Brain::setFirstIdea(const std::string &idea)
{
	this->ideas[0] = idea;
}

std::string Brain::getFirstIdea() const
{
	return (this->ideas[0]);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}
