/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   _                                                  ...      :::    :::   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nxu              ...   ::::::::.fi       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor" << called;
}

Fixed::~Fixed()
{
	std::cout << "Destructor" << called;
}

Fixed::Fixed(const Fixed & dummy)
{
	std::cout << "Copy constructor" << called;
	*this = dummy;
}

Fixed	& Fixed::operator = (const Fixed & dummy)
{
	std::cout << "Copy assignment operator" << called;
	if (this != & dummy)
		this->value = dummy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function" << called;
	return (this->value);
}

void	Fixed::setRawBits(int val)
{
	std::cout << "setRawBits member function" << called;
	this->value = val;
}

/*
$> ./a.out
Default constructor called
Copy constructor called
Assignation operator called
// .
// └── This line may be missing depending on your implementation
getRawBits member function called
Default constructor called
Assignation operator called
getRawBits member function called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
$>
*/
