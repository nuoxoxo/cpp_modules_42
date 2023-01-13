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

#include "WrongAnimal.hpp"


// constructor . destructor

WrongAnimal::WrongAnimal() : m_type("_an_animal_")
{
	std::cout << LOWKEY << __FUNCTION__
	<< " Constructor" << called REST;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << LOWKEY << __FUNCTION__
	<< " Destructor" << called REST;
}

WrongAnimal::WrongAnimal(std::string type) : m_type(type)
{
	std::cout << LOWKEY << __FUNCTION__
	<< " Constructor (overloaded)" << called REST;

}

// copy

WrongAnimal::WrongAnimal(const WrongAnimal & dummy)
{
	*this = dummy;

	std::cout << LOWKEY << __FUNCTION__
	<< " Copy constructor" << called REST;

}


// copy assignement = 

WrongAnimal & WrongAnimal::operator = (const WrongAnimal & dummy)
{
	this->m_type = dummy.m_type;

	std::cout << LOWKEY << __FUNCTION__
	<< " Copy assignment constructor" << called REST;

	return (*this);

}


// .method()

void	WrongAnimal::makeSound() const
{
	/*
	std::cout
	<< YELL "Pet sounds ~ " ITAL << __FUNCTION__ 
	<< YELL "()" called REST;
	*/

	std::cout << m_type << ": " YELL "\"Pet sounds ~ \" " REST nl;
}


// getter

std::string	WrongAnimal::getType() const
{
	std::cout
	<< LOWKEY << m_type << ": " << __FUNCTION__ << called REST;

	return m_type;
}
