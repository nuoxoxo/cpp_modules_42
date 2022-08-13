/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   _                                                  ...      :::    :::   */
/*                                                    ... ...         :::     */
/*   By: nuo <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nuo               ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nuo              ...   ::::::::.fi       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {}
Karen::~Karen(void) {}

void	Karen::debug(void)	{ std::cout << debug_level; }
void	Karen::info(void)	{ std::cout << info_level; }
void	Karen::warning(void)	{ std::cout << warning_level; }
void	Karen::error(void)	{ std::cout << error_level; }

void	Karen::complain(std::string level) {
	if (level == "")
		return ;
	bool		found = false;
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void	(Karen::*modes[]) (void) = {
		& Karen::debug,
		& Karen::info,
		& Karen::warning,
		& Karen::error
	};
	for (int i = 0; i < 4; ++i) {
		if (!found)
		{
			if (levels[i] == level)
			{
				(this->*modes[i])();
				found = true;
			}
		}
		else
		{
			(this->*modes[i])();
		}
	}
	if (found)
		return ;
	std::cout << insignificant << std::endl;
}

void	usage()
{
	std::cout << "Usage: ./karenFilter [ stuff_like_maybe_a_complain_level ] ";
	std::cout << std::endl;
}
