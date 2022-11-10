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

#include "Fmt.hpp"

Fmt::Fmt() {}
Fmt::~Fmt() {}

Fmt::Fmt
(
 	const std::string & first,
	const std::string & last,
	const std::string & nick
):	m_firstname(first), 
	m_lastname(last), 
	m_nickname(nick)
{
	
}


const	std::string & Fmt::get_firstname() const
{
	// return (firstname);
	return (m_firstname);
}

const	std::string & Fmt::get_lastname() const
{
	// return (lastname);
	return (m_lastname);
}

const	std::string & Fmt::get_nickname() const
{
	// return (nickname);
	return (m_nickname);
}

void	Fmt::fmt_printer(const Contact & c) const
{
	std::cout << "First name: "	<< c.info[0] << "\n";
	std::cout << "Last name: "	<< c.info[1] << "\n";
	std::cout << "Nickname: "	<< c.info[2] << "\n";
	std::cout << "Phone number: "	<< c.info[3] << "\n";
	std::cout << "Dark secret: "	<< c.info[4] << "\n";
}