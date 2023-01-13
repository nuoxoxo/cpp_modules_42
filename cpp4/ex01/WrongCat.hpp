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

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "iostream"
# include "string"
# include "cstdlib" // rand

# include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal // note the `public` keyword
{

//protected:
//	std::string	m_type;

public:
	// canon
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &);
	WrongCat & operator = (const WrongCat &);
	
	// overload
	// WrongCat(std::string); // pas de dog('dog_name')
	// getter
	// std::string	getType() const; // pas de gettype pour chiens/chats

	// method
	void	makeSound() const;

};


#endif

