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

/*
------------8<--------[ Goals (2 of 'em) ]----------------


(1) . add public member operator overloads to fixed class:

	-	Six comparison operators: >, <, >=, <=, == and !=
	-	Four arithmetic operators: +, -, *, and /
	-	Increment and decrement operators
		-	pre-increment
		-	post-increment
		-	pre-decrement
		-	post-decrement 
	*-	these operators will in-/decrement the fixed point 
		value from the smallest representable ε such as 1 + ε > 1


(2) . add public `static` member functions overloads to fixed class:

	•	The static member function min 
		-	min() takes references on 2 fixed point values
		-	returns a reference to the smaller value
		-	add an overload 
			- overload takes references on 2 const fixed point values
			- returns a reference to the smallest const value
	•	The static member function max
		-	max() takes references on 2 fixed point values
		-	returns a reference to the bigger value
		-	add an overload 
			- overload takes references on 2 const fixed point values
			- returns a reference to the bigger constant value.

*/

#ifndef FIXED_HPP
# define FIXED_HPP

# include "iostream"
# include "cmath" // new

class	Fixed
{
	private:
		int			fixed_point_value;
		static const int	number_of_fractional_bits = 8;

	public:
		Fixed(void);
		Fixed(int const fixed_point_value); // new
		Fixed(float const fixed_point_value); // new
		Fixed(Fixed const & input);
		~Fixed(void);

		void	setRawBits(int const);
		int	getRawBits(void) const;

		Fixed	& operator = (Fixed const & input);

		// Six comparison operators: >, <, >=, <=, == and !=
		// Four arithmetic operators: +, -, *, and /

		bool	operator >	(Fixed const & input) const;
		bool	operator <	(Fixed const & input) const;
		bool	operator <=	(Fixed const & input) const;
		bool	operator <=	(Fixed const & input) const;
		bool	operator ==	(Fixed const & input) const;
		bool	operator !=	(Fixed const & input) const;

		Fixed	operator +	(Fixed const & input);
		Fixed	operator -	(Fixed const & input);
		Fixed	operator *	(Fixed const & input);
		Fixed	operator /	(Fixed const & input);

		Fixed	operator ++	(int);
		Fixed	operator --	(int);
		Fixed	operator ++	(void);
		Fixed	operator --	(void);

		// add static member funcs min & max
		static Fixed & min (Fixed const &, Fixed const &);
		static Fixed & max (Fixed const &, Fixed const &);

		// overloading them
		static Fixed const & min (Fixed const &, Fixed const &);
		static Fixed const & max (Fixed const &, Fixed const &);
};

#endif
