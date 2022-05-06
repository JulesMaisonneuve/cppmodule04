#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*Subject Tests*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*Array of animals*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Animal *Animals[50];
	for (int i = 0; i < 4; i++)
		Animals[i] = new Dog;
	for (int j = 4; j < 8; j++)
		Animals[j] = new Cat;
	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*Brain Tests*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;
	Dog Chien;
	Cat Chat;
	Chien.getBrain()->setFirstIdea("manger");
	Chat.getBrain()->setFirstIdea("manger");
	std::cout << "Dog first idea: " << Chien.getBrain()->getFirstIdea() << std::endl;
	std::cout << "Cat first idea: " << Chat.getBrain()->getFirstIdea() << std::endl;
	Dog *Chien_2 = new Dog(Chien);
	Cat *Chat_2	= new Cat(Chat);
	Chien_2->getBrain()->setFirstIdea("dormir");
	Chat_2->getBrain()->setFirstIdea("dormir");
	std::cout << "Dog first idea: " << Chien_2->getBrain()->getFirstIdea() << std::endl;
	std::cout << "Cat first idea: " << Chat_2->getBrain()->getFirstIdea() << std::endl;
	std::cout << "=====================================================================" << std::endl;
	std::cout << "\e[1m*Destructors*\e[0m" << std::endl;
	std::cout << "=====================================================================" << std::endl;
	for (int k = 0; k < 8; k++)
		delete Animals[k];
	delete Chien_2;
	delete Chat_2;
	return (0);
}
