/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   {}.cpp                                             :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: 2023/01/09 14:55:26 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUREVIRTUALANIMAL_HPP
# define PUREVIRTUALANIMAL_HPP

# include "iostream"
# include "string"
# include "cstdlib" // rand

# include "Utils.hpp"

class	PureVirtualAnimal
{

protected:
	std::string	m_type;

public:
	// canon
	PureVirtualAnimal();
	PureVirtualAnimal(const PureVirtualAnimal &);
	PureVirtualAnimal & operator = (const PureVirtualAnimal &);

	virtual	~PureVirtualAnimal();

	// param constructor
	PureVirtualAnimal(std::string);

	// getter
	std::string	getType() const;

	// method
	virtual void	makeSound() const = 0; // pure virtual function

	// ::notes::
	// 
	// a Pure Virtual Function: of which declaration ends in `= 0`
	// A P.V. function implicitly makes the class `abstract`
	// 
	// Abstract classes cannot be `instantiated`
	//
	// Subclasses should override/implement all inherited PV functions
	// If they do not, they too will become abstract.
	//
	// (deep.)
	//
	//
	// why virtual destructor - q.v. x00
	// why virtual functions - q.v. x00
};


//	colors

# define ITAL	"\033[3m"

# define LOWKEY	"\033[0;2m"
# define WHITE	"\033[1;37m"
# define CYAN	"\033[0;36m"
# define YELL	"\033[0;33m"
# define GREEN	"\033[0;32m"
# define RED	"\033[0;31m"
# define MAG	"\033[0;35m"

# define REST	"\033[0;0m"


//	formatting

# define called " called\n"
# define inside "\ninside "
# define nl2 " \n\n"
# define nl " \n"


#endif
