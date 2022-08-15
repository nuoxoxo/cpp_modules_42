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
	//std::cout << "Default constructor" << called;
}

Fixed::Fixed(Fixed const & dummy)
{
	//std::cout << "Copy constructor" << called;
	this->fixed_point_value = dummy.getRawBits();
}

Fixed::~Fixed()
{
	//std::cout << "Destructor" << called;
}

Fixed	& Fixed::operator = (Fixed const & dummy)
{
	//std::cout << "Assignation operator" << called;
	this->fixed_point_value = dummy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function" << called;
	return (this->fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function" << called;
	this->fixed_point_value = raw;
}
