/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: 2023/01/09 14:55:26 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include "iostream"
# include "cassert"
# include "string"
# include "scavtrap"

class	ScavTrap : public ClapTrap
{
public:

	//	Canon

	ScavTrap();
	~ScavTrap();
	ScavTrap(ScavTrap const &);
	ScavTrap & operator = (ScavTrap const &);

	//	Overload

	ScavTrap(std::string);

	//	Getter

	void attack(const std::string &);
	void guardGate();

};

#endif
