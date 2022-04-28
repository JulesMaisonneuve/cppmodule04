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
		void makeSound() const
		{
			if (type == "Cat")
				std::cout << "Meow" << std::endl;
			else if (type == "Dog")
				std::cout << "Woof Woof" << std::endl;
			else
				std::cout << "*Inaudible sound*" << std::endl;
		};
		void setType(std::string type);
		std::string getType(void) const;
		~Animal(void);
};


class Dog : public Animal
{
	private:
	public:
		Dog(void);
		~Dog(void);
		
};

class Cat : public Animal
{
	private:
	public:
		Cat(void);
		~Cat(void);
};

#endif
