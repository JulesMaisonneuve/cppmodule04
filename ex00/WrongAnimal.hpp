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
		WrongAnimal &operator=(const WrongAnimal &other);
		WrongAnimal(const WrongAnimal &s);
		void makeSound() const;
		void setType(std::string type);
		std::string getType(void) const;
		virtual ~WrongAnimal(void);
};

#endif
