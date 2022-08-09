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

Zombie::Zombie(std::string name) : name(name) {}

//	added for oo1

void	announce_foreach(Zombie *)

//

std::string	Zombie::get_name(void) const
{
	return (this->name);
}

void	Zombie::label(void) const
{
	//std::cout << '<' << this->name << '>' << ' ';
	std::cout << _green "﹤" << this->name << "﹥" _reset;
}

void	Zombie::announce(void) const
{
	Zombie::label();
	std::cout << "BraiiiiiiinnnzzzZ... \n";
}

Zombie::~Zombie(void)
{
	Zombie::label();
	std::cout << _cyan "is dead. \n" _reset;
}
