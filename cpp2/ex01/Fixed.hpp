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
# include "cmath" // x01

class	Fixed
{

static const int	m_number_of_fractional_bits = 8;
int			m_fixed_point_value;

public:
	Fixed();
	~Fixed();
	Fixed(const int); // x01
	Fixed(const float); // x01
	Fixed(const Fixed &);

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat() const ; // x01
	int	toInt() const ; // x01

public:
	Fixed & operator = (const Fixed &);

};

std::ostream & operator << (std::ostream &, const Fixed &); // x01

# define called " called\n"
# define inside "\ninside "
# define CYAN	"\x1b[36m"
# define YELL	"\x1b[33m"
# define REST	"\x1b[0m"
# define nl2 " \n\n"
# define nl " \n"

#endif
