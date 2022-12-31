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


// ostream overload

std::ostream & operator << (std::ostream & ostream, Fixed const & fixed_num)
{
	ostream << fixed_num.toFloat() << yell " " << __FUNCTION__ << rest;
	return ostream;
}


// Default

Fixed::Fixed() : m_fixed_point_value() {std::cout << "Default constructor" << called;}
Fixed::~Fixed() {std::cout << "Destructor" << called;}

// Converter functions

float	Fixed::toFloat() const
{
	// for debugging
	std::cout << cyan nl << __FUNCTION__ <<  rest nl;
	
	std::cout << m_fixed_point_value;
	std::cout << yell " (" << (m_fixed_point_value >> 8) << " << 8)" rest << nl;
	
	std::cout << " / " << nl;
	
	std::cout << (1 << 8);
	std::cout << cyan " (1 << 8)" rest << nl;

	std::cout << " = " << nl;
	std::cout << ((float)m_fixed_point_value / (1 << 8)) << nl2;
	// debugging ends

	return (float) m_fixed_point_value / (1 << m_number_of_fractional_bits);
}

int	Fixed::toInt() const
{
	// for debugging
	std::cout << cyan nl << __FUNCTION__ << rest nl;
	
	std::cout << m_fixed_point_value;
	std::cout << yell " (" << (m_fixed_point_value >> 8) << " << 8)" rest << nl;
	
	std::cout << " >> " << nl;
	
	std::cout << m_number_of_fractional_bits;
	std::cout << cyan " (number of fractional bits)" rest << nl;

	std::cout << " = " << nl;
	std::cout << ((m_fixed_point_value) >> (m_number_of_fractional_bits)) << nl2;
	// debugging ends

	return (m_fixed_point_value) >> (m_number_of_fractional_bits);
}


// Operator =

Fixed	& Fixed::operator = (const Fixed & dummy)
{
	std::cout << "Copy assignment operator" << called;
	// this->m_fixed_point_value = dummy.getRawBits();
	m_fixed_point_value = dummy.getRawBits();
	return (*this);
}


// Getters . Setters

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function" << called;
	return (this->m_fixed_point_value);
}

void	Fixed::setRawBits(int val)
{
	std::cout << "setRawBits member function" << called;
	// this->m_fixed_point_value = val;
	m_fixed_point_value = val;
}


// Constructors

Fixed::Fixed(const int x)
{
	// std::cout << "Int constructor" << called;
	// silenced above line to match output
	// test //
	/*std::cout << yell inside rest << __FUNCTION__ << nl;
	std::cout << cyan "const Int x is " rest << x << nl;
	std::cout << cyan "this->m_number_of_fractional_bits : " rest;
	std::cout << this->m_number_of_fractional_bits << nl;
	std::cout << cyan "x << (this->m_number_of_fractional_bits) : " rest;
	std::cout << (x << this->m_number_of_fractional_bits) << nl;
	std::cout << cyan "x << (Fixed::m_number_of_fractional_bits) : " rest;
	std::cout << (x << Fixed::m_number_of_fractional_bits) << nl2;
	*/// end //
	this->m_fixed_point_value = (x << this->m_number_of_fractional_bits);
}

Fixed::Fixed(const float x)
{
	// std::cout << "Float constructor" << called;
	// silenced above line to match output
	/*// debugging //
	std::cout << yell inside rest << __FUNCTION__ << nl;
	std::cout << cyan "const Float x is " rest << x << nl;
	std::cout << cyan "1 << 8 : " rest << (1 << 8) << nl;
	std::cout << cyan "x * 256 : " rest << (float) x * 256 << nl;
	std::cout << cyan "x * (1 << 8) : " rest << x * (1 << 8) << nl;
	std::cout << cyan "roundf(x * (1 << 8) : " rest ;
	std::cout << std::roundf(x * (1 << 8)) << nl2;
	*/// debugging ends //

	// for debugging
	std::cout << cyan nl << __FUNCTION__ << " constructor for float" rest nl;
	std::cout << x << nl ;;
	
	std::cout << " * " << nl;
	
	std::cout << (1 << 8);
	std::cout << cyan " (1 << 8)" rest << nl;

	std::cout << " = " << nl;
	std::cout << (x * (1 << 8)) << nl;
	std::cout << " roundf= " << nl;
	std::cout << roundf(x * (1 << 8)) << nl2;
	// debugging ends
	
	this->m_fixed_point_value = roundf(x * (1 << m_number_of_fractional_bits));
}

Fixed::Fixed(const Fixed & dummy)
{
	std::cout << "Copy constructor" << called;
	*this = dummy;
}


/*
• overload the << operator 
	inserts a floating point version of the fixed point value into 
	the param output stream
*//*

""" exo1
do the following stuff
	• constructor 1
		- takes a constant \integer\ as a parameter 
		- converts it to the correspondant fixed(8) point value
		- The fractional bits value is initialized like in ex00

	• constructor 2
		- takes a constant \floating point\ as a parameter 
		- converts it to the correspondant fixed(8) point value 
		- The fractional bits value is initialized like in ex00

	• member 1
		- proto :	float toFloat( void ) const;
		- converts the fixed point value to a floating point value.

	• member 2
		- proto :	int toInt( void ) const;
		- converts the fixed point value to an integer value.

	• overload the « operator 
		- inserts a floating point version of the fpv into 
		the param output stream.
"""

*/
