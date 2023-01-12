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

#include "Animal.hpp"


// constructor . destructor

Animal::Animal()
{
	std::cout << LOWKEY << __FUNCTION__
	<< " Constructor" << called REST;
}

Animal::~Animal()
{
	std::cout << LOWKEY << __FUNCTION__
	<< " Destructor" << called REST;
}


// copy

Animal::Animal(const Animal & dummy)
{
	*this = dummy;

	std::cout << LOWKEY << __FUNCTION__
	<< " Copy constructor" << called REST;

}


// copy assignement = 

Animal & Animal::operator = (const Animal & dummy)
{
	this->m_type = dummy.m_type;
	std::cout << LOWKEY << __FUNCTION__
	<< " Copy assignment constructor" << called REST;

	return (*this);

}


// .method()

void	Animal::makeSound() const
{
	/*
	std::cout
	<< YELL "Pet sounds ~ " ITAL << __FUNCTION__ 
	<< YELL "()" called REST;
	*/

	std::cout << YELL "\"Pet sounds ~ \" " REST nl;
}


// getter

std::string	Animal::getType() const
{
	return m_type;
}
