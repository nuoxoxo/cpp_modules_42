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
//# include "Color.hpp"

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
};

Zombie	*newZombie(std::string);
void	randomChump(std::string);

# define _yellow	"\x1b[33m"
# define _red		"\x1b[31m"
# define _green		"\x1b[32m"
# define _blue		"\x1b[34m"
# define _mag		"\x1b[35m"
# define _cyan		"\x1b[36m"
# define _ital		"\x1b[3m"
# define _reset		"\x1b[0m"

#endif
