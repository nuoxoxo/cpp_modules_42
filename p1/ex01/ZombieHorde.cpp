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

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie		*zh = new Zombie[N];
	int		i;

	i = -1;
	while (++i < N)
	{
		zh[i].set_name(name);
	}
	return (zh);
}

// how do we make sure the N is correct?
//	No, we can't. because the ompiler doesn't know 
//	what the pointer is pointing to.
//	Unless we cache the N somewhere, in which 
//	case `horde` should better be a Class 

void	announce_foreach(int N, Zombie *zh)
{
	int		i;

	i = -1;
	while (++i < N)
	{
		std::cout << _yellow "zombie no." _reset << 1 + i << ' ';
		zh[i].announce();
	}
}
