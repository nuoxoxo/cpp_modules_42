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

#ifndef FIXED_HPP
# define FIXED_HPP

# include "iostream"
# include "cmath"

class	Fixed
{

static const int	m_number_of_fractional_bits = 8;
int			m_fixed_point_value;

public:
	Fixed(void);
	Fixed(const float);
	Fixed(const int);
	Fixed(const Fixed &);
	~Fixed(void);

	void			setRawBits(int);
	int			getRawBits(void) const;
	float			toFloat() const ;
	int			toInt() const ;

	//	above: part 1
	//	below: part 2

	Fixed	operator + (const Fixed &) const ;
	Fixed	operator - (const Fixed &) const ;
	Fixed	operator * (const Fixed &) const ;
	Fixed	operator / (const Fixed &) const ;

	Fixed	& operator = (const Fixed &);

	Fixed	operator ++ (int);
	Fixed	& operator ++ (void);

	Fixed	operator -- (int);
	Fixed	& operator -- (void);

	bool	operator > (const Fixed &) const ;
	bool	operator < (const Fixed &) const ;
	bool	operator >= (const Fixed &) const ;
	bool	operator <= (const Fixed &) const ;
	bool	operator == (const Fixed &) const ;
	bool	operator != (const Fixed &) const ;

	//	take ref on 2 fpv, return a ref of the -er one

	static	Fixed & min(Fixed &, Fixed &);
	static	Fixed & max(Fixed &, Fixed &);

	//	overload takes ref on 2 const fpv, return ref of the -er one

	static const Fixed & min(const Fixed &, const Fixed &);
	static const Fixed & max(const Fixed &, const Fixed &);
};

std::ostream & operator << (std::ostream &, const Fixed &);

# define called " called\n"
# define inside "\ninside "
# define CYAN	"\x1b[36m"
# define YELL	"\x1b[33m"
# define REST	"\x1b[0m"
# define nl2 " \n\n"
# define nl " \n"
# define GREEN	"\x1b[32m"
# define RED	"\x1b[31m"

#endif

/*
-	Add public static member functions overloads as follows

•	The static member function 'min' 
	
	-	takes references on two fixed point values 
		returns a reference to the smallest value
	-	an overload that takes references on 
		two constant fixed point values 
		returns a reference to the smallest constant value.

•	The static member function 'max'

	-	takes references on two fixed point values 
		returns a reference to the biggest value
	-	an overload that takes references on 
		two constant fixed point values 
		returns a reference to the biggest constant value.
*/
