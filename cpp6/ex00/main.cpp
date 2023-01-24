#include "Cpp06.hpp"
#include "iostream"
#include "sstream"
#include "iomanip"

struct	_Scalar_
{
	char	c;
	int	i;
	float	f;
};

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


//	convertor . brain

void	Brain(const std::string & s)
{
	_Scalar_	sc;

	/* void	(Harl::*modes[4]) (void) = {
		& Harl::debug,
		& Harl::info,
		& Harl::warning,
		& Harl::error
	}; */
}


//	Type casting:
//		char 
//		digit (int) 
//		float 
//		double

void	strCastChar(const std::string & s, _Scalar_ *sc)
{
	if (s.empty() || !sc)
		return ;
	
	// step 1. convert principle type
	sc->c = s[1];
	
	// step 2. convert the rest based on principle type
	sc->i = static_cast<int> (sc->c);
	sc->f = static_cast<float> (sc->c);
	sc->d = static_cast<double> (sc->c);
}

void	strCastInt(const std::string & s, _Scalar_ *sc)
{
	if (s.empty() || !sc)
		return ;

	// step 1. convert principle type
	sc->i = std::stoi(s);

	// step 2. convert the rest based on principle type
	sc->c = static_cast<char>(sc->i);
	sc->f = static_cast<float>(sc->i);
	sc->d = static_cast<double>(sc->i);
}

void	strCastFloat(const std::string & s, _Scalar_ *sc)
{
	if (s.empty() || !sc)
		return ;

	// step 1. convert principle type
	sc->f = static_cast<float>(std::stof(s));

	// step 2. convert the rest based on principle type
	sc->c = static_cast<char>(sc->f);
	sc->i = static_cast<int>(sc->f);
	sc->d = static_cast<double>(sc->f);
}

void	strCastDouble(const std::string &, _Scalar_ *sc)
{
	if (s.empty() || !sc)
		return ;

	// step 1. convert principle type
	sc->d = std::stod(s);

	// step 2. convert the rest based on principle type
	sc->c = static_cast<char>(sc->d);
	sc->i = static_cast<int>(sc->d);
	sc->f = static_cast<float>(sc->d);

}


/* -----------------------------------8<---------------------------------- */


//	

/* C does not specify whether char is signed / unsigned, which is 
	left to implementations to decide.

On implementations where char is unsigned, 250 is within its range.

And because it’s 1 byte which is 8 bits and that means :

	the signed range is
		
	from	−2^(8−1)
		ie. -2^7 
		ie. -128

	to	2^(8−1) − 1
		ie. 127

* note : 0 takes one spot.

If it were unsigned then it would be
	
	from 	0 
	to 	2^(8−1)
		
	ie. 	0 - 255

it isn’t range per se, but it is the Max Absolute Entry for signed ones. */
