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

static const int	number_of_fractional_bits = 8;
int			fixed_point_value;

public:
	Fixed(void);
	Fixed(const int); // x01
	Fixed(const float); // x01

	Fixed(const Fixed &);
	~Fixed(void);

	void	setRawBits(int);
	int	getRawBits(void) const;

	float	toFloat() const ; // x01
	int	toInt() const ; // x01

public:
	Fixed & operator = (const Fixed &);
};

std::ostream & operator << (std::ostream &, const Fixed &); // x01

# define called " called\n"
# define inside "\ninside "
# define nl2 " \n\n"
# define nl " \n"
# define cy	"\x1b[36m"
# define yell	"\x1b[33m"
# define rest	"\x1b[0m"

#endif
