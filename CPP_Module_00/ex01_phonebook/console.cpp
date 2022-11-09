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

#include "ContactFmt.hpp"

ContactFmt::ContactFmt() {}
ContactFmt::~ContactFmt() {}

ContactFmt::ContactFmt
(
 	const std::string & first,
	const std::string & last,
	const std::string & nick
):	firstname(first), lastname(last), nickname(nick) {}

const	std::string & ContactFmt::get_firstname() const
{
	return (firstname);
}

const	std::string & ContactFmt::get_lastname() const
{
	return (lastname);
}

const	std::string & ContactFmt::get_nickname() const
{
	return (nickname);
}

void	ContactFmt::display_info(const Contact & c) const
{
	std::cout << "First name: \t"	<< c.info[0] << "\n";
	std::cout << "Last name: "	<< c.info[1] << "\n";
	std::cout << "Nickname: "	<< c.info[2] << "\n";
	std::cout << "Phone number: "	<< c.info[3] << "\n";
	std::cout << "Dark secret: "	<< c.info[4] << "\n";
}