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

#include "Brain.hpp"


// canon	done

Brain::Brain()
{
	std::cout
	<< LOWKEY << __FUNCTION__
	<< " Constructor" << called REST;
}

Brain::~Brain()
{
	std::cout
	<< LOWKEY << __FUNCTION__
	<< " Destructor" << called REST;
}

Brain::Brain(const Brain & dummy)
{
	*this = dummy;

	std::cout
	<< LOWKEY << __FUNCTION__
	<< " Copy constructor" << called REST;

}

Brain & Brain::operator = (const Brain & dummy)
{
	this->m_type = dummy.m_type;

	std::cout
	<< LOWKEY << __FUNCTION__
	<< " Copy assignment constructor" << called REST;

	return (*this);

}

// param constructor	done

Brain::Brain(std::string type) : m_type(type)
{
	std::cout
	<< LOWKEY << __FUNCTION__
	<< " Constructor (overloaded)" << called REST;

}

// getter . setter

std::string	* Brain::getIdea() const
{
	// std::cout << LOWKEY << __FUNCTION__ << called REST;

	return m_idea;
}

std::string	& Brain::getIdea(int i) const
{
	// std::cout << LOWKEY << __FUNCTION__ << called REST;
	
	if (i < 0 || i >= SIZE)
	{
		stdL::cout << "invalid index: " << i
		<< ". valid range: 0 - " << B_SIZE << ". \n";
		return (NULL);
	}
	return m_idea[i]
}

void	Brain::setIdea(int i, std::string s)
{
	if (i < 0 || i >= SIZE)
	{
		stdL::cout << "invalid index: " << i
		<< ". valid range: 0 - " << B_SIZE << ". \n";
		return ;
	}
	m_idea[i] = s;
}
