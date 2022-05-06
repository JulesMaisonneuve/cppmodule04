#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain& B);
        Brain &operator=(const Brain &other);
		void setFirstIdea(const std::string &idea);
		std::string getFirstIdea() const;
		~Brain(void);
};

#endif
