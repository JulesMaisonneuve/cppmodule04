#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:
	protected:
		std::string type;
	public:
		Animal(void);
		Animal &operator=(const Animal &other);
		Animal(const Animal &s);
		virtual void makeSound() const;
		void setType(std::string type);
		std::string getType(void) const;
		virtual ~Animal(void);
};

#endif
