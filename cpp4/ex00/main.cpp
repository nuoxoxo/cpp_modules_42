#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

static void	print_ending(void);

int	main()
{
	srand(time(0));

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
	}
	
	print_ending();
	
	// more tests . testing srand w/ usleep
	{
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
	}
	
	print_ending();
	
	// subject
	{
		std::cout
		<< CYAN "retry the subject main w/ WrongClass " nl REST;

		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();	
		
		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		
		i->makeSound(); //will output the cat sound!
		meta->makeSound();
		
		delete meta;
		delete i;
	}
	
	print_ending();

	std::cout << "do valgrind. " nl2;
}

static void	print_ending(void)
{
	std::cout
	<< LOWKEY nl 
	<< ":::::::::::: end test ::::::::::::" nl2 REST;
}
