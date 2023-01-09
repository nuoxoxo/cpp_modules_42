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

#include "iostream"
#include "Fixed.hpp"

int		main( void )
{
	// Subject test
	Fixed	a;
	Fixed	b( a ); 
	Fixed	c;

	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	// Personalized test
	/*Fixed	test(42);
	std::cout << test << nl;
	
	Fixed	test_ftoi(369.963f);
	test_ftoi.toInt();
	std::cout << test_ftoi << nl;

	Fixed	test_monster(196.883f);
	test_monster.toInt();
	std::cout << test_monster << nl;
	*/

	Fixed	pi(3.1415926f);
	pi.toInt();
	std::cout << pi << nl;

	return 0;
}
