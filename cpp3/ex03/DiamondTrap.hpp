/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: 2023/01/09 14:55:26 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "iostream"
# include "string"
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"


class	DiamondTrap : public ClapTrap
{

private:
	const static std::string		m_trait; // needs redefinition
	// otherwise inherited const string memeber is not allowed.

public:

	//	Canon

	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(DiamondTrap const &);
	DiamondTrap & operator = (DiamondTrap const &);

	//	Overload

	DiamondTrap(std::string);

	//	New role

	void guardGate();

};

#endif
