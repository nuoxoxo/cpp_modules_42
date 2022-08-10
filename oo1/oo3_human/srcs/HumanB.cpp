/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   _                                                  ...      :::    :::   */
/*                                                    ... ...         :::     */
/*   By: nuo <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nuo               ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nuo              ...   ::::::::.fi       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "HumanB.hpp"


/*	setting		*/


HumanA::HumanA(std::string _, Weapon & __) : name(_), weapon(__) {}

HumanA::~HumanA(void) {}

Weapon	& HumanA::getWeapon(void) const { return (this->weapon); }


/*	actions		*/


void	HumanA::attack(void) const
{
	std::cout << this->name;
	std::cout << " picks up a mighty ";
	std::cout << this->weapon.getType();
	std:: << ", screams and shouts and ... runs away. \n";
}
