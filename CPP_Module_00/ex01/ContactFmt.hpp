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

#ifndef __CONTACT_FMT_H__
# define __CONTACT_FMT_H__

# include "iostream"
# include "Contact.hpp"

class	ContactFmt
{
	private:
		std::string		m_firstname;
		std::string		m_lastname;
		std::string		m_nickname;

	public:
		ContactFmt();
		virtual		~ContactFmt();

		ContactFmt
		(
			const	std::string &,
			const	std::string &,
			const	std::string &
		);

		const	std::string & get_firstname()	const;
		const	std::string & get_lastname()	const;
		const	std::string & get_nickname()	const;
		void	fmt_printer(const Contact &)	const;
};

#endif
