/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   _                                                  ...      :::    :::   */
/*                                                    ... ...         :::     */
/*   By: nuo <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nuo               ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nuo              ...   ::::::::.fi       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "string"

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string	& getType(void) const;
		void			setType(const std::string & newType);
};

#endif

// ----------------8<----------[ FIXME ]------------------------

/*

- todo a Weapon class, which has
	- a type string
	- a getType method 
		- getType returns a const reference to the type string
	- a setType method

*/
