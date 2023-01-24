#include "Cpp06.hpp"
#include "iostream"
#include "sstream"
#include "iomanip"
#include "limits"

/*struct	_Scalar_
{
	char	c;
	int	i;
	float	f;
};*/

static void	_usage_();
static bool	strIsInt(const std::string &);
static bool	strIsChar(const std::string &);
//static bool	strIsFloat(const std::string &);
//static bool	strIsDouble(const std::string &);

int	main(int c, char **v)
{
	if (c ^ 2)
		return (_usage_(), 1);

	std::cout << strIsInt(std::string(v[1])) << std::endl;
	std::cout << strIsChar(std::string(v[1])) << std::endl;

	(void) c, (void) v;
	return 0;
}


//

static void	_usage_()
{
	std::cout << nl YELL "Usage: ./convert _literal_ " RESET nl2;
}


//	char . num (int) . float . double

static bool	strIsChar(const std::string & s)
{
	return (s.length() == 3 && s[0] == '\'' && s[2] == '\'');
}

static bool	strIsInt(const std::string & s)
{
	if (s.empty())
		return false;

	std::string::const_iterator	it = s.begin();

	while (it != s.end() && std::isdigit(*it))
		++it;;
	return (it == s.end());
}

static bool	strIsFloat(const std::string & s)
{
	if (isMacroFloat(s))
		return true;

	std::string	t;
	float		f;
	int		len = (int) s.length();

	if (s[len - 1] != 'f')
		return false
	t = s.substr(0, len - 1);
	std::stringstream ss(t);
	
}


//	is macro group

bool	isMacroFloat(const std::string & s)
{
	return (s == "inff" || s == "-inff" || s == "+inff" || s == "nanf");
}

bool	isMacroDouble(const std::string & s)
{
	return (s == "inf" || s == "-inf" || s == "+inf" || s == "nan");
}
