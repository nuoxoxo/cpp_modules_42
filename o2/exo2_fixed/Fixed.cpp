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
#define inside "\ninside "
#define nl2 " \n\n"

///	accounting : 3+3+2+2+1 = 11
///	3x default . get set assign = 3 . 2x constr . 2x convtr . overload

//	default
Fixed::Fixed()
{ this->fixed_point_value = 0; }

//	copy
Fixed::Fixed(const Fixed & dummy)
{ *this = dummy; }

//	destr
Fixed::~Fixed()
{}

//	getter setter
int Fixed::getRawBits(void) const
{ return (this->fixed_point_value); }

void Fixed::setRawBits(int )
{ this->fixed_point_value = raw; }

//	assignment
Fixed	& Fixed::operator = (const Fixed & dummy) // assignment
{
	this->fixed_point_value = dummy.getRawBits(); 
	return (*this);
}

//	int constr
Fixed::Fixed(const int x)
{ this->fixed_point_value = (x << this->number_of_fractional_bits); }

//	float constr
Fixed::Fixed(const float x)
{ this->fixed_point_value = std::roundf(x * (1 << 8)); }

//	convertors
float	Fixed::toFloat() const
{ return (float) this->fixed_point_value / (1 << 8); }

int	Fixed::toInt() const
{ return (this->fixed_point_value) >> (this->number_of_fractional_bits); }

//	\<<\ overload
std::ostream &	operator << (std::ostream & ostream, Fixed const & fx)
{ ostream << fx.toFloat(); return ostream; }


