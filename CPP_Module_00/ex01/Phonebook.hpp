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
# include "Contact.hpp"
# include "ContactFmt.hpp"

class	Phonebook
{
	private:
		std::size_t		m_size;
		ContactFmt		m_contactfmt;
		Contact			*m_contact;

	private:
		void		print_all(void) const;
		void		print_col(const ContactFmt & m_contactfmt, std::size_t) const;
		std::string	linter(const std::string &) const;

	public:
		std::size_t	last_added;

	public:
		Phonebook();
		virtual		~Phonebook();

		void		add(void);
		void		search(void);
		bool		is_empty(void) const;
		void		get_input(int, Contact & contact);		
};

# define width 10
# define nl2 "\n\n"
# define sp3 "   "
# define sp4 "    "
# define anm "=^..^= =^..^= =^..^="
# define head "- Phonebook -"
# define headsize 14
# define nocol "\033[0m"
# define white "\033[0m"
# define empty_prompt " \n➜ \n"
# define pbook "➜ Your awesome phonebook is online. \n"
# define usage "➜ [Usage]: Enter your command [Add, Search, Exit]"
# define nocom "Service unavailable. Please re-enter your command \n"
# define tocut "----------8<----[ cut here ]---------------- "

#endif
