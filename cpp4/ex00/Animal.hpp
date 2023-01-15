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

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"
# include "string"
# include "unistd.h" // usleep
# include "cstdlib" // rand

class	Animal
{

protected: // Inheritance
	std::string	m_type;

public:
	// canon
	Animal();
	Animal(const Animal &);
	Animal & operator = (const Animal &);

	virtual	~Animal(); // Polymorphism

	// param constructor
	Animal(std::string);

	//	Why virtual destructor
	//
	//	virtual destructor is needed in Base class so that 
	// 	the child class can use the virtual function
	// 	of the Base class

	// getter
	std::string	getType() const;

	// method
	virtual void	makeSound() const; // Polymorphism

	//	virtual functions
	//
	// 	... now we have the option of modifying this 
	// 	function in sub classes
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
