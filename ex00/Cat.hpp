#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	private:
	public:
		Cat(void);
		Cat &operator=(const Cat &other);
		Cat(const Cat &s);
		void makeSound() const;
		virtual ~Cat(void);
};

#endif
