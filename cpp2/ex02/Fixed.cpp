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


/*		+ -	(arithmetic)	*/

Fixed	Fixed::operator + (const Fixed & n) const
{
	return Fixed(this->toFloat() + n.toFloat());
}

Fixed	Fixed::operator - (const Fixed & n) const
{
	return Fixed(this->toFloat() - n.toFloat());
}

/*		* /	(arithmetic)		*/

Fixed	Fixed::operator * (const Fixed &n) const
{
	return Fixed(this->toFloat() * n.toFloat());
}

Fixed	Fixed::operator / (const Fixed & n) const
{
	if (n.toInt() > 0)
		return Fixed(this->toFloat() / n.toFloat());
	else throw std::runtime_error("Cannot divide by zero");
}


/*		< >		(symbols)		*/

bool	Fixed::operator > (Fixed const & n) const
{
	return this->m_fixed_point_value > n.m_fixed_point_value;
}

bool	Fixed::operator < (const Fixed & n) const
{
	return this->m_fixed_point_value < n.m_fixed_point_value;
}

/*		<= >= 	(symbols)		*/

bool	Fixed::operator >= (const Fixed & n) const
{
	return this->getRawBits() >= n.getRawBits();
}

bool	Fixed::operator <= (const Fixed & n) const
{
	return this->getRawBits() <= n.getRawBits();;
}

/*		== != 	(symbols)		*/

bool	Fixed::operator == (const Fixed & n) const
{
	return this->getRawBits() == n.getRawBits();;
}

bool	Fixed::operator != (const Fixed & n) const
{
	return !(*this == n);
}

/*	pre-increment . pre-decrement		*/

Fixed	& Fixed::operator ++ (void)
{
	this->m_fixed_point_value += 1;
	return (*this);
}

Fixed	& Fixed::operator -- (void)
{
	this->m_fixed_point_value -= 1;
	return (*this);
}

/*	post-increment . post-decrement		*/

Fixed	Fixed::operator ++ (int)
{
	Fixed	temp(*this);

	(*this).m_fixed_point_value += 1;
	return (temp);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	temp(*this);

	(*this).m_fixed_point_value -= 1;
	return (temp);
}

/*		min . max		*/

/*	
 *	Subject dictates: 
 *	
 *	1. /static/ member functions
 *		pass-in	: /references/ of 2 Fixeds
 *		returns : /reference/ to the smaller one
 *	
 *	2. overloads
 *		pass-in	: /references/ of 2 /constant/ Fixeds
 *		returns	: /reference/ to the smaller /constant/
 */

Fixed	& Fixed::min(Fixed & n1, Fixed & n2)
{
	if (n1.m_fixed_point_value < n2.m_fixed_point_value)
		return n1;
	return n2;
}

Fixed	& Fixed::max(Fixed & n1, Fixed & n2)
{
	if (n1.m_fixed_point_value > n2.m_fixed_point_value)
		return n1;
	return n2;
}

Fixed const & Fixed::min(const Fixed & n1, const Fixed & n2)
{
	if (n1.m_fixed_point_value < n2.m_fixed_point_value)
		return n1;
	return n2;
}

Fixed const & Fixed::max(const Fixed & n1, const Fixed & n2)
{
	if (n1.m_fixed_point_value > n2.m_fixed_point_value)
		return n1;
	return n2;
}


/************************ Above: part 2 ************************ 
 ************************
 ************************
 ************************ Below: part 1 ************************/


// ostream overload

std::ostream & operator << (std::ostream & ostream, Fixed const & fixed_num)
{
	ostream << fixed_num.toFloat() << YELL " " << __FUNCTION__ << REST;
	return ostream;
}

// Default

Fixed::Fixed() : m_fixed_point_value() {std::cout << "Default constructor" << called;}
Fixed::~Fixed() {std::cout << "Destructor" << called;}

// Converter functions

float	Fixed::toFloat() const
{
	/*// for debugging
	std::cout << CYAN nl << __FUNCTION__ <<  REST nl;
	
	std::cout << m_fixed_point_value;
	std::cout << YELL " (" << (m_fixed_point_value >> 8) << " << 8)" REST << nl;
	
	std::cout << " / " << nl;
	
	std::cout << (1 << 8);
	std::cout << CYAN " (1 << 8)" REST << nl;

	std::cout << " = " << nl;
	std::cout << ((float)m_fixed_point_value / (1 << 8)) << nl2;
	*/// debugging ends

	return (float) m_fixed_point_value / (1 << m_number_of_fractional_bits);
}

int	Fixed::toInt() const
{
	/*// for debugging
	std::cout << CYAN nl << __FUNCTION__ << REST nl;
	
	std::cout << m_fixed_point_value;
	std::cout << YELL " (" << (m_fixed_point_value >> 8) << " << 8)" REST << nl;
	
	std::cout << " >> " << nl;
	
	std::cout << m_number_of_fractional_bits;
	std::cout << CYAN " (number of fractional bits)" REST << nl;

	std::cout << " = " << nl;
	std::cout << ((m_fixed_point_value) >> (m_number_of_fractional_bits)) << nl2;
	*/// debugging ends

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
	/*std::cout << YELL inside REST << __FUNCTION__ << nl;
	std::cout << CYAN "const Int x is " REST << x << nl;
	std::cout << CYAN "this->m_number_of_fractional_bits : " REST;
	std::cout << this->m_number_of_fractional_bits << nl;
	std::cout << CYAN "x << (this->m_number_of_fractional_bits) : " REST;
	std::cout << (x << this->m_number_of_fractional_bits) << nl;
	std::cout << CYAN "x << (Fixed::m_number_of_fractional_bits) : " REST;
	std::cout << (x << Fixed::m_number_of_fractional_bits) << nl2;
	*/// end //
	this->m_fixed_point_value = (x << this->m_number_of_fractional_bits);
}

Fixed::Fixed(const float x)
{
	// std::cout << "Float constructor" << called;
	// silenced above line to match output
	/*// debugging //
	std::cout << YELL inside REST << __FUNCTION__ << nl;
	std::cout << CYAN "const Float x is " REST << x << nl;
	std::cout << CYAN "1 << 8 : " REST << (1 << 8) << nl;
	std::cout << CYAN "x * 256 : " REST << (float) x * 256 << nl;
	std::cout << CYAN "x * (1 << 8) : " REST << x * (1 << 8) << nl;
	std::cout << CYAN "roundf(x * (1 << 8) : " REST ;
	std::cout << std::roundf(x * (1 << 8)) << nl2;
	*/// debugging ends //

	/*// for debugging
	std::cout << CYAN nl << __FUNCTION__ << " constructor for float" REST nl;
	std::cout << x << nl ;;
	
	std::cout << " * " << nl;
	
	std::cout << (1 << 8);
	std::cout << CYAN " (1 << 8)" REST << nl;

	std::cout << " = " << nl;
	std::cout << (x * (1 << 8)) << nl;
	std::cout << " roundf= " << nl;
	std::cout << roundf(x * (1 << 8)) << nl2;
	*/// debugging ends
	
	this->m_fixed_point_value = roundf(x * (1 << m_number_of_fractional_bits));
}

Fixed::Fixed(const Fixed & dummy)
{
	std::cout << "Copy constructor" << called;
	*this = dummy;
}
