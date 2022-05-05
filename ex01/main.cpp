#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Subject Tests*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	const Animal* j = new Dog();
	
	const Animal* i = new Cat();

	delete j;
	delete i;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Array of animals*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	Animal *Animals[20];
	for (int i = 0; i < 4; i++)
		Animals[i] = new Dog;
	for (int j = 4; j < 8; j++)
		Animals[j] = new Cat;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "\e[1m*Destructors*\e[0m" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	for (int k = 0; k < 8; k++)
		delete Animals[k];
	return (0);
}
