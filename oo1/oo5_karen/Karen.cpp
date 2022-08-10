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

void	Karen::debug(void)	{ std::cout << DEBUG_LEVEL; }
void	Karen::info(void)	{ std::cout << INFO_LEVEL; }
void	Karen::warning(void)	{ std::cout << WARNING_LEVEL; }
void	Karen::error(void)	{ std::cout << ERROR_LEVEL; }

void	Karen::complain(std::string level)
{

}

/*

• "DEBUG" level: 

	"I love to get extra bacon 
	for my 7XL-double-cheese-triple-pickle-special-ketchup burger. 
	I just love it!"

• "INFO" level: 

	"I cannot believe adding extra bacon cost more money. 
	You don’t put enough! 
	If you did I would not have to ask for it!"

• "WARNING" level: 

	"I think I deserve to have some extra bacon for free. 
	I’ve been coming here for years 
	and you just started working here last month."

• "ERROR" level: 

	"This is unacceptable, 
	I want to speak to the manager now."

*/
