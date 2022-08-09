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

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include "iostream"
# include "string"
# include "Color.hpp"

class	Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);

		std::string	get_name(void) const;
		void		announce(void) const;

	private:
		std::string	name;
		void		label(void) const;
		//void		something(void) const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
