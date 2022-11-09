/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   _                                                  ...      :::    :::   */
/*                                                    ... ...         :::     */
/*   By:  nuxu <marvin@42.fr>                       ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nuxu              ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nuxu             ...   ::::::::.fi       */
/*                                                                            */
/* ****************************************************************** nxu *** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

# include "iostream"
# include "iomanip" // for std::setw
# include "contact.hpp"
# include "console.hpp"

# define nl2 "\n\n"
# define sp3 "   "
# define sp4 "    "
# define anm "=^..^= =^..^= =^..^="
# define arr " \n> \n"

class	Phonebook
{
	private:
		std::size_t	size;
		//std::size_t	last_added;
		Contact		*contact;
		Console		console;

		void		put_table() const;
		void		put_columns(const Console &console, std::size_t) const;
		std::string	linter(const std::string &) const;

	public:
		Phonebook();

		virtual		~Phonebook();
		void		add();
		void		search();
		bool		is_empty() const;
		void		get_input(int, Contact &contact);
		std::size_t	last_added;
};

#endif
