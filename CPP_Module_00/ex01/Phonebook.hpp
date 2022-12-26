/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By:  nuxu <marvin@42.fr>                       ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nuxu              ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nuxu             ...   ::::::::.fi       */
/*                                                                            */
/* ****************************************************************** nxu *** */

#ifndef Phonebook_HPP
# define Phonebook_HPP

# include "iostream"
# include "iomanip" // for std::setw
# include "cstdlib" // for exit()
# include "Contact.hpp"

# define PHONEBOOK_THICKNESS 8
# define WIDTH 10

# define FMT_HEAD_SIZE 18
# define FMT_HEAD "--- Phonebook ---"

# define NL2 "\n\n"
# define SKIP_PROMPT " \n➜ \n"

# define NOCMD "Service unavailable. Please re-enter your command \n"
# define USAGE "➜ [Usage]: Enter your command [Add, Search, Exit]"
# define ONAIR "➜ Your awesome Phonebook is online. \n"
# define DELIM "----------8<----[ cut here ]---------------- \n"
# define FRAME "+----------+----------+----------+----------+ \n"
# define HEAD "|     index|first name| last name|  nickname| \n"

class Phonebook
{
	private:
		Contact			m_contacts[PHONEBOOK_THICKNESS];
		std::size_t		m_size;
	
	public:
		Phonebook();
		virtual ~Phonebook();

		void		append(int index, Contact this_guy);
		int			search(Phonebook);
		void		print_all(void);
		void		print_col(int index);
		int			empty(int index);
		bool		is_empty(void) const;
		// void		collect_garbage(void);
		void		parse_input(std::string &);
		std::string	linter(std::string);
};

bool isnumeric(const std::string &);

#endif
