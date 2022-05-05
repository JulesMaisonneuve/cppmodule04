#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Subject Tests*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Copy assignement test*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "j type before assigning to meta: " << j->getType() << std::endl;
	delete j;
	j = meta;
	std::cout << "j type after assigning to meta: " << j->getType() << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Default constructor test*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	const Animal k;
	const Dog D;
	const Cat C;
	std::cout << "k type: " << k.getType() << std::endl;
	std::cout << "D type: " << D.getType() << std::endl;
	std::cout << "C type: " << C.getType() << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Copy constructor test*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	const WrongAnimal test;
	const WrongAnimal l(test);
	std::cout << "WrongAnimal l type: " << l.getType() << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Destructors*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	delete i;
	delete meta;
	return (0);
}
