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

#define called " called\n"

Fixed::Fixed()
{
	this->fixed_point_value = 0;
	std::cout << "Default constructor" << called;
}

Fixed::Fixed(Fixed const & dummy)
{
	std::cout << "Copy constructor" << called;
	this->fixed_point_value = dummy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor" << called;
}

Fixed	& Fixed::operator = (Fixed const & dummy)
{
	std::cout << "Assignation operator" << called;
	this->fixed_point_value = dummy.getRawBits();
	//std::cout << "Assignation operator" << called;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function" << called;
	return (this->fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function" << called;
	this->fixed_point_value = raw;
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
