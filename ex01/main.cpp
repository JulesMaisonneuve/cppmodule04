#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	// Animal *Animals[20];
	// for (int i = 0; i < 4; i++)
	// 	Animals[i] = new Dog;
	// for (int j = 4; j < 8; j++)
	// 	Animals[j] = new Cat;
	// for (int k = 0; k < 8; k++)
	// 	delete Animals[k];
	const Animal* j = new Dog();
	
	const Animal* i = new Cat();

	delete j;
	delete i;
	return (0);
}
