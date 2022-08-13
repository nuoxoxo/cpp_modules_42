/* ************************************************************************** */
/*                                                                            */
/*                            \\             /`/``                            */
/*                            ~\o o_       0 0\                               */
/*                            / \__)      (u  ); _  _                         */
/*                     / \/ \/  /           \  \/ \/ \                        */
/*                    /(   . . )            (         )\                      */
/*                   /  \_____/              \_______/  \                     */
/*                       []  []               [[] [[]    *.                   */
/*                       []] []]              [[] [[]                         */
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
		void		put_columns(const Console &console, std::size_t i) const;
		std::string	linter(const std::string &) const;

	public:
		Phonebook();
		~Phonebook();
	
		void		add();
		void		search();
		bool		is_empty() const;
		void		get_input(int, Contact &contact);
		std::size_t	last_added;
};

#endif
