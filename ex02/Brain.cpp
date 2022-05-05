#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain& B)
{
	*this = B;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	if (this == &other)
		return *this;
	*this->ideas = *other.ideas;
    return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}
