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
# include "ContactFmt.hpp"

class	Phonebook
{
	private:
		std::size_t	size;
		Contact		*contact;
		ContactFmt		ContactFmt;

		//std::size_t	last_added;

		void		print_all(void) const;
		void		print_col(const ContactFmt & ContactFmt, std::size_t) const;
		std::string	linter(const std::string &) const;

	public:
		Phonebook();
		virtual		~Phonebook();

		void		add(void);
		void		search(void);
		bool		is_empty(void) const;
		void		get_input(int, Contact & contact);

		std::size_t	last_added;
};

# define nl2 "\n\n"
# define sp3 "   "
# define sp4 "    "
# define anm "=^..^= =^..^= =^..^="
# define empty_prompt " \n> \n"

#endif
