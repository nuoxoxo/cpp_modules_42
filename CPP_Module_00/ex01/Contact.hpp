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
		Contact();
		virtual	~Contact();

	public:
		static std::string	field[5];
		std::string		info[5];

		enum	Field
		{
			first,
			last,
			nick,
			phone,
			dark
		};
};

#endif
