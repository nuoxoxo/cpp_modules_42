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

#ifndef CAT_HPP
# define CAT_HPP

# include "iostream"
# include "string"
# include "cstdlib" // rand
# include "Animal.hpp"


class Cat : public Animal // note the `public` keyword
{

//protected:
//	std::string	m_type;

public:
	// canon
	Cat();
	~Cat();
	Cat(const Cat &);
	Cat & operator = (const Cat &);
	
	// overload
	// Cat(std::string); // pas de dog('dog_name')
	// getter
	// std::string	getType() const; // pas de gettype pour chiens/chats

	// method
	void	makeSound() const;

};


#endif

