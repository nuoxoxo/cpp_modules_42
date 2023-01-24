#include "Cpp06.hpp"
#include "iostream"
#include "sstream"
#include "iomanip"
#include "limits"

#include "cstring"

static void	_usage_();
static bool	strIsChar(const std::string &);




int	main(int c, char **v)
{
	if (c ^ 2)
		return (_usage_(), 1);

	(void) c, (void) v;
	return 0;
}

//

static void	_usage_()
{
	std::cout << nl YELL "Usage: ./convert _literal_ " RESET nl2;
}

static bool	strIsChar(const std::string & s)
{
	return (s.length() == 3 && s[0] == '\'' && s[0] == s[2]);
}

static bool	strIsChar(const std::string & s)
