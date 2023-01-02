/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By: nuo <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nuo               ...    :::             */
/*   Updated: 2023/01/02 15:45:27 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}

void	Harl::complain(std::string level)
{
	bool	found;
	int		i;

	if (level == "")
		return ;
	
	uppercase_str(level);

	std::string	levels[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void	(Harl::*modes[]) (void) =
	{
		& Harl::debug,
		& Harl::info,
		& Harl::warning,
		& Harl::error
	};

	i = -1;
	while (++i < 4)
	{
		if (found)
		{
			(this->*modes[i])();
		}
		else if (!found && levels[i] == level)
		{
			(this->*modes[i])();
			found = true;
		}
	}
	if (found)
		return ;
	std::cout << INSIGNIFICANT << std::endl;
}


// complaint functions

void	Harl::debug(void)
{
	std::cout << _G_ << __FUNCTION__ << _L_ << _R_ << std::endl;
	std::cout << _Y_ << DEBUG_LEVEL << _R_ ;
}

void	Harl::info(void)
{
	std::cout << _G_ << __FUNCTION__ << _L_ << _R_ << std::endl;
	std::cout << _Y_ << INFO_LEVEL << _R_ ;
}

void	Harl::warning(void)
{
	std::cout << _G_ << __FUNCTION__ << _L_ << _R_ << std::endl;
	std::cout << _Y_ << WARNING_LEVEL << _R_ ;
}

void	Harl::error(void)
{
	std::cout << _G_ << __FUNCTION__ << _L_ << _R_ << std::endl;
	std::cout << _Y_ << ERROR_LEVEL << _R_ ;
}


// Utils

void	usage()
{
	std::cout << "\tUsage: ./HarlFilter \x1b[32m" << "level \x1b[0m";
	std::cout << std::endl;
}

void	uppercase_str(std::string & s)
{
	int		i;

	i = -1;
	while (++i < (int) s.length())
	{
		uppercase_char(s[i]);
	}
}

void    uppercase_char(char & c) { c = std::toupper(c); }

