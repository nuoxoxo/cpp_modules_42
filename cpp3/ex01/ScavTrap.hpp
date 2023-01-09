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

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "iostream"
# include "cassert"
# include "string"
# include "ClapTrap.hpp"


class	ScavTrap : public ClapTrap
{

private:
	const static std::string		m_type;

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
