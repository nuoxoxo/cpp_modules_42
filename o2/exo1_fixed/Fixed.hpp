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
# include "cmath" // new

class	Fixed
{
	private:
		static const int	number_of_fractional_bits = 8;
		int			fixed_point_value;

	public:
		Fixed(void);

		Fixed(const float); // new
		Fixed(const int); // new

		Fixed(const Fixed &);
		~Fixed(void);

		Fixed			& operator = (const Fixed &);

		void			setRawBits(int);
		int			getRawBits(void) const;

		float			toFloat() const ; // new
		int			toInt() const ; // new

};

std::ostream & operator << (std::ostream &, const Fixed &); // new
// try reversing const & Fixed
//std::ostream & operator << (std::ostream &, Fixed const &); // new

# define cy	"\x1b[36m"
# define yell	"\x1b[33m"
# define rest	"\x1b[0m"

#endif
