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

#ifndef Harl_HPP
# define Harl_HPP

# include "iostream"
# include "string"

class	Harl
{

void	debug(void);
void	info(void);
void	warning(void);
void	error(void);

public:

	Harl(void);
	virtual	~Harl(void);
	void	complain(std::string);

};

//	def all complaints

/* 
# define DEBUG_LEVEL "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it! \n\n"*/
# define DEBUG_LEVEL "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do! \n\n"
/*
# define INFO_LEVEL "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it! \n\n"*/
# define INFO_LEVEL "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more! \n\n"
/*
# define WARNING_LEVEL "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month. \n\n"*/
# define WARNING_LEVEL "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month. \n\n"
/*
# define ERROR_LEVEL "This is unacceptable, I want to speak to the manager now. \n\n"*/
# define ERROR_LEVEL "This is unacceptable! I want to speak to the manager now. \n\n"


//	def. colors

# define _y "\x1b[33m"
# define _g "\x1b[32;1m"
# define _i "\x1b[3m"
# define _r "\x1b[0m"
# define _l " level"

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
