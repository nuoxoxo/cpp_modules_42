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

#ifndef KAREN_HPP
# define KAREN_HPP

# include "iostream"
# include "string"

class	Karen
{
	private:

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:

		Karen(void);
		~Karen(void);

		void	complain(std::string);
};

# define DEBUG_LEVEL "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it! \n"

# define INFO_LEVEL "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it! \n"

# define WARNING_LEVEL "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month. \n"

# define ERROR_LEVEL "This is unacceptable, I want to speak to the manager now. \n"

#endif

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
