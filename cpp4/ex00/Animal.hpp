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

class	Animal
{

protected:

	std::string	m_type;

public:
	// canon
	Animal();
	
	Animal(const Animal &);
	Animal & operator = (const Animal &);
	
	virtual	~Animal(); // note the `virtual` keyword here


	// need a virtual Destructor in Base class so that 
	// 	the child class can use the virtual function
	// 	of the Base class


	// overload
	Animal(std::string);

	// getter
	std::string	getType() const;

	// method
	virtual void	makeSound() const; // note the `virtual destructor`
	

	// Virtual functions can be overridden by the child class 
	// 	if the that child class changes the implementation 
	// 	of the virtual function so that the base virtual 
	// 	function isn't called.


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
