#include "Scalar.hpp"

//	define

static void	_usage_()
{
	std::cout << nl YELL "Usage: ./convert _literal_ " RESET nl2;
}


//	convertor . brain

static void	Brain(const char * str)
{
	std::string	s;
	_Scalar_	SC;
	int		i;

	/* void	(Harl::*modes[4]) (void) = {
		& Harl::debug,
		& Harl::info,
		& Harl::warning,
		& Harl::error
	}; */

	bool	(*mode_isLiteral[4]) (const std::string &) =
	{
		& strIsChar,
		& strIsDigit,
		& strIsFloat,
		& strIsDouble
	};

	void	(*mode_convertor[4]) (const std::string &, _Scalar_ *) =
	{
		& castChar,
		& castInt,
		& castFloat,
		& castDouble
	};

	s = std::string(str);
	i = -1;
	while (++i < 4)
	{
		if (mode_isLiteral[i](s))
		{
			// std::cout << "current level: " << i << std::endl;
			// // to delete
			
			return (mode_convertor[i](s, & SC), Printer(& SC));

void	print_canon(const std::string funcName, const std::string canonName)
{
	std::cout << LOWKEY << funcName << ' ' << canonName << called RESET;
}

void	print_ending(int i)
{
	std::cout
	<< LOWKEY nl2 
	<< ":::::::::::: end test " << i << " ::::::::::::" nl2 RESET;
}

void	print_ending(void)
{
	std::cout
	<< LOWKEY nl2 
	<< ":::::::::::: end test ::::::::::::" nl2 RESET;
}

void	print_ending(std::string & s)
{
	std::cout
	<< LOWKEY nl2
	<< ":::::::::::: end test (" << s << ") ::::::::::::" nl2 RESET;
}

void	print_ending(int i, const std::string s)
{
	std::cout
	<< LOWKEY nl 
	<< ":::::::::::: end test "
	<< i << " (" << s << ") ::::::::::::" nl2 RESET;
}
