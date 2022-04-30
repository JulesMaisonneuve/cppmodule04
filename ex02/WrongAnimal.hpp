#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	private:
	protected:
		std::string type;
	public:
		WrongAnimal(void);
		void makeSound() const
		{
			std::cout << "*Screams in WrongAnimal*" << std::endl;
		};
		void setType(std::string type);
		std::string getType(void) const;
		~WrongAnimal(void);
};

class WrongCat : public WrongAnimal
{
	private:
	public:
		WrongCat(void);
		~WrongCat(void);
};

#endif
