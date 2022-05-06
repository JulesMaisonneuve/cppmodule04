#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*Subject Tests*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*Copy assignement test*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;
	std::cout << "Type de Dog avant assignation à meta (Animal)	" << j->getType() << std::endl;
	delete j;
	j = meta;
	std::cout << "Type de Dog après assignation à meta (Animal)	" << j->getType() << std::endl;
	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*WrongAnimal Tests*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;
	const WrongAnimal* Dummy = new WrongCat();
	std::cout << Dummy->getType() << " " << std::endl;
	Dummy->makeSound();
	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*Default constructor test*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;
	const Animal k;
	const Dog D;
	const Cat C;
	std::cout << "k type: " << k.getType() << std::endl;
	std::cout << "D type: " << D.getType() << std::endl;
	std::cout << "C type: " << C.getType() << std::endl;
	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*Copy constructor test*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;
	const WrongAnimal Marco;
	const WrongAnimal Polo(Marco);
	std::cout << "WrongAnimal Polo type: " << Polo.getType() << std::endl;
	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*Destructors*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;
	delete i;
	delete meta;
	delete Dummy;
	return (0);
}
