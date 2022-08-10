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
#include "Weapon.hpp"

#define love "[\x1b[3msic\x1b[0m] nothing"

/*	setting		*/


Weapon::Weapon(std::string _): type(_) {}

Weapon::~Weapon(void) {}

const std::string & Weapon::getType(void) const { return (this->type); }


/*	weapon action		*/


void	Weapon::setType(const std::string & type)
{
	if (newType != "")
	{
		this->type = type;
		return ;
	}
	this->type = love;
}
