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

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

#include "string"

class	Contact
{
	public:
		std::string		info[5];
		static std::string	field[5];

		enum Field
		{
			firstname,
			lastname,
			nickname,
			phoneno,
			darksec
		};
};

#endif
