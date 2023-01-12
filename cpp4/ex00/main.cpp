#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

static void	print_ending(void) {std::cout << LOWKEY nl "(...end test)" nl2 REST;};

int main()
{
	unsigned int	microsecond = (unsigned int) 1e5;

	// subject
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();	
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		delete j;
		print_ending();
	}
	// some tests
	{
		// usleep(6 * microsecond); // uncomt to make srand useful
		
		Animal	*Jeffe = new Animal();
		Animal	Jorge("Jorge");

		Jeffe->makeSound();
		Jorge.makeSound();
		

		Dog	*Dylan = new Dog();

		Dylan->makeSound();

		/*
		try { Dog Jorge("Jorge"); }
		catch (const std::runtime_error & e)
		{ std::cerr << e.what() << std::endl; }
		*/
		
		Cat	*Cathy = new Cat();
		
		Cathy->makeSound();

		// bye
		delete	Jeffe;
		delete	Cathy;
		delete	Dylan;
		print_ending();
	}
	// more tests . testing srand w/ usleep
	{
		// usleep(6 * microsecond);

		Animal	*Jeffe = new Animal();
		Animal	Jorge("Jorge");

		Jeffe->makeSound();
		Jorge.makeSound();
		

		Dog	*Dylan = new Dog();

		Dylan->makeSound();

		/*
		try { Dog Jorge("Jorge"); }
		catch (const std::runtime_error & e)
		{ std::cerr << e.what() << std::endl; }
		*/
		
		Cat	*Cathy = new Cat();
		
		Cathy->makeSound();

		// bye
		delete	Jeffe;
		delete	Cathy;
		delete	Dylan;
		print_ending();
	}

	std::cout << "do valgrind. " nl2;
}
