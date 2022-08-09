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
