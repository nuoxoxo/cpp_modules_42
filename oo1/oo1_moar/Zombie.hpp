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

class	Zombie
{
	private:
		std::string	name;
		void		label(void) const;

	public:
		Zombie(void); // mod.
		~Zombie(void);

		void		set_name(std::string new_name); // new
		/*	note . set_name can't be const		*/
		void		announce(void) const;
		std::string	get_name(void) const;
};

void		announce_foreach(int, Zombie *); // new
Zombie		*zombieHorde(int, std::string); // new

/*		colors			*/

# define _yellow	"\x1b[33m"
# define _red		"\x1b[31m"
# define _green		"\x1b[32m"
# define _blue		"\x1b[34m"
# define _mag		"\x1b[35m"
# define _cyan		"\x1b[36m"
# define _ital		"\x1b[3m"
# define _reset		"\x1b[0m"

/*		deprecated		*/

//	Zombie	*newZombie(std::string name);
//	void	randomChump(std::string name);

#endif
