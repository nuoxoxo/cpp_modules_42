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

/*
 * 
 *	everything the same as x00
 * 
 */

#include "PureVirtualAnimal.hpp"


// canon

PureVirtualAnimal::PureVirtualAnimal() : m_type("(an_animal)")
{
	std::cout
	<< LOWKEY << __FUNCTION__
	<< " Constructor" << called REST;
}

PureVirtualAnimal::~PureVirtualAnimal()
{
	std::cout
	<< LOWKEY << __FUNCTION__
	<< " Destructor" << called REST;
}

PureVirtualAnimal::PureVirtualAnimal(const PureVirtualAnimal & dummy)
{
	*this = dummy;

	std::cout
	<< LOWKEY << __FUNCTION__
	<< " Copy constructor" << called REST;

}

PureVirtualAnimal & PureVirtualAnimal::operator = (const PureVirtualAnimal & dummy)
{
	this->m_type = dummy.m_type;

	std::cout
	<< LOWKEY << __FUNCTION__
	<< " Copy assignment constructor" << called REST;

	return (*this);

}


// param constructor

PureVirtualAnimal::PureVirtualAnimal(std::string type) : m_type(type)
{
	std::cout
	<< LOWKEY << __FUNCTION__
	<< " Constructor (overloaded)" << called REST;

}


// method

void	PureVirtualAnimal::makeSound() const
{
	std::cout
	<< m_type << ": " YELL "\"Pet sounds ~ \" " REST nl;
}


// getter

std::string	PureVirtualAnimal::getType() const
{
	std::cout
	<< LOWKEY << m_type << ": " << __FUNCTION__ << called REST;

	return m_type;
}


