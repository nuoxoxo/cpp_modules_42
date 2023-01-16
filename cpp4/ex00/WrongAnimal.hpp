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

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "iostream"
# include "string"
# include "Utils.hpp"

class	WrongAnimal
{

protected:

	std::string	m_type;

public:
	// canon
	WrongAnimal();
	
	WrongAnimal(const WrongAnimal &);
	WrongAnimal & operator = (const WrongAnimal &);
	
	virtual	~WrongAnimal(); // note the `virtual` keyword here
	
	// overload
	WrongAnimal(std::string);

	// getter
	std::string	getType() const;

	// method
	virtual void	makeSound() const; // note the `virtual destructor`

};


// //	colors

// # define ITAL	"\033[3m"

// # define LOWKEY	"\033[0;2m"
// # define WHITE	"\033[1;37m"
// # define CYAN	"\033[0;36m"
// # define YELL	"\033[0;33m"
// # define GREEN	"\033[0;32m"
// # define RED	"\033[0;31m"
// # define MAG	"\033[0;35m"

// # define REST	"\033[0;0m"


// //	formatting

// # define called " called\n"
// # define inside "\ninside "
// # define nl2 " \n\n"
// # define nl " \n"

#endif
