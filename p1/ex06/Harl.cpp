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

#include "Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}

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

void	Harl::complain(std::string level)
{
	bool	found;
	int		i;

	if (level == "")
		return ;
	
	transform(level.begin(), level.end(), level.begin(), ::toupper);

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

	found = false;
	for (i = 0; i < 4; ++i)
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

void	usage()
{
	std::cout << "\tUsage: ./HarlFilter \x1b[32m" << "level \x1b[0m";
	//std::cout << "[ stuff_like_maybe_a_complain_level ] \x1b[0m";
	std::cout << std::endl;
}

/*
green	"\x1b[32m"
reset	"\x1b[0m"
*/
