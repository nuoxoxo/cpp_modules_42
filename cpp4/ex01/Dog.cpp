/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   {}.cpp                                             :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: 2023/01/09 14:55:26 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// canon

Dog::Dog() : Animal("Dog")
{
	std::cout << LOWKEY << __FUNCTION__
	<< " Constructor" << called REST;

	m_brain = new Brain(); // added Brain
}

Dog::~Dog()
{
	std::cout << LOWKEY << __FUNCTION__
	<< " Destructor" << called REST;

	delete m_brain; // added Brain
}


// copy

Dog::Dog(const Dog & dummy)
{
	*this = dummy;

	std::cout << LOWKEY << __FUNCTION__
	<< " Copy constructor" << called REST;

}


// copy assignement = 

Dog & Dog::operator = (const Dog & dummy)
{
	std::cout << LOWKEY << __FUNCTION__
	<< " Copy assignment constructor" << called REST;
	
	m_brain = new Brain(*dummy.m_brain); // added Brain

	return (*this);

}


// method

Brain	*Dog::brain() const
{
	return m_brain;
}

void	Dog::makeSound() const
{
	std::string	sound_of_dogs[3] = \
	{
		"\"Woof-woof ~ \"",
		"\"Ruff-ruff ~ \"", 
		"\"Ouaf-ouaf ~ \""
	};

	int n = (int) rand() % 3;

	// srand() debugger
	// std::cout << r << ' ' << n << std::endl;

	std::cout << m_type << ": " YELL << sound_of_dogs[n] << REST nl;
}


