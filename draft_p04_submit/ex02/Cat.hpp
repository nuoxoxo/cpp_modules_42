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
# include "PureVirtualAnimal.hpp"
# include "Brain.hpp"


class Cat : public PureVirtualAnimal // note the `public` keyword
{

private:
	Brain	*m_brain; // added Brain

public:
	// canon
	Cat();
	~Cat();
	Cat(const Cat &);
	Cat & operator = (const Cat &);
	
	// method
	Brain	*brain() const;
	void	makeSound() const;

};


#endif

