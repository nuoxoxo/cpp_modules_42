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
static bool	strIsChar(const std::string &);
static bool	strIsDigit(const std::string &);
static bool	strIsFloat(const std::string &);
static bool	strIsDouble(const std::string &);

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


//	Type checking:
//		char 
//		digit (int) 
//		float 
//		double

static bool	strIsChar(const std::string & s)
{
	return (s.length() == 3 && s[0] == '\'' && s[2] == '\'');
}

static bool	strIsDigit(const std::string & s)
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
	if (isMacroFloat(s)) // (marco: see below)
		return true;

	float		tmp;
	int		len = (int) s.length();

	if (s[len - 1] != 'f')
		return false;
	std::stringstream ss(s.substr(0, len - 1));
	ss >> tmp;
	if (!ss.eof() || ss.fail())
		return false;
	return true;		
}

static bool	strIsDouble(const std::string & s)
{
	if (isMacroDouble(s))
		return true;

	std::stringstream	ss(s);
	double			tmp;

	ss >> tmp;
	if (!ss.eof() || ss.fail())
		return false;
	return true;
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

