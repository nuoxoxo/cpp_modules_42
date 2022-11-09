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

#ifndef __CONSOLE_H__
# define __CONSOLE_H__

//# include "phonebook.hpp"
# include "iostream"
# include "contact.hpp"

class	ContactFmt
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;

	public:
		ContactFmt();
		ContactFmt
		(
			const	std::string &,
			const	std::string &,
			const	std::string &
		);
		~ContactFmt();
		const	std::string & get_firstname()	const;
		const	std::string & get_lastname()	const;
		const	std::string & get_nickname()	const;
		void	display_info(const Contact &)	const;
};

#endif
