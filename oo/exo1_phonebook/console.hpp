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

#ifndef __CONSOLE_H__
# define __CONSOLE_H__

//# include "phonebook.hpp"
# include "iostream"
# include "contact.hpp"

class	Console
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;

	public:
		Console();
		Console(
			const	std::string &,
			const	std::string &,
			const	std::string &
		);
		const	std::string &get_firstname() const;
		const	std::string &get_lastname() const;
		const	std::string &get_nickname() const;
		void	display_info(const Contact &) const;
};

#endif
