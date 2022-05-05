#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	public:
		WrongCat(void);
        WrongCat &operator=(const WrongCat &other);
		WrongCat(const WrongCat &s);
		~WrongCat(void);
};

#endif