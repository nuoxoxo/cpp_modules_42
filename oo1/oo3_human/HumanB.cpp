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


HumanB::HumanB(std::string _) : name(_), weapon(nullptr) {}

HumanB::~HumanB(void) {}

Weapon	& HumanB::getWeapon(void) const { return (*(this->weapon)); }


/*	actions		*/


void	HumanB::setWeapon(Weapon & weapon)
{
	this->weapon = & weapon;
}

void	HumanB::attack(void) const
{
	std::cout << _gn << this->name << _rs;
	std::cout << " picks up a mighty ";
	std::cout << _cn << this->weapon->getType() << _rs;
	if (this->weapon)
	{
		std::cout << " and retreats westward. \n";
	}
	else
	{
		std::cout << ", smiles and puts it down on the floor. \n";
	}
}
