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
		void makeSound() const;
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
