#include "Animal.hpp"
#include "Dog.hpp"

static void	print_ending(void) {std::cout << LOWKEY nl "(...end test)" nl2 REST;};

int main()
{
	// subject
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		//const Animal* i = new Cat();	
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		//std::cout << i->getType() << " " << std::endl;
		//i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta; // (?)
	}
	print_ending();
	// some tests
	{
		Animal	*Jeffe = new Animal();
		Animal	Jorge("Jorge");

		Jeffe->makeSound();
		Jorge.makeSound();
		
		
		Dog	*Dylan = new Dog();
		
		Dylan->makeSound();
	}
	print_ending();
}
