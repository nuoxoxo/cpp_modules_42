#include "Cpp06.hpp"
#include "iostream"
#include "sstream"
#include "iomanip"

//	proto

struct	_Scalar_
{
	char	c;
	int	i;
	float	f;
};

static void	_usage_();
static void	Brain(const std::string &);

static bool	strIsChar(const std::string &);
static bool	strIsDigit(const std::string &);
static bool	strIsFloat(const std::string &);
static bool	strIsDouble(const std::string &);

static bool	isMacroFloat(const std::string & s);
static bool	isMacroDouble(const std::string & s);

static void	castInt(const std::string &, _Scalar_ *);
static void	castChar(const std::string &, _Scalar_ *);
static void	castFloat(const std::string &, _Scalar_ *);
static void	castDouble(const std::string &, _Scalar_ *);


//	drive

int	main(int c, char **v)
{
	if (c ^ 2)
		return (_usage_(), 1);

	std::cout << strIsInt(std::string(v[1])) << std::endl;
	std::cout << strIsChar(std::string(v[1])) << std::endl;

	(void) c, (void) v;
	return 0;
}


//	define

static void	_usage_()
{
	std::cout << nl YELL "Usage: ./convert _literal_ " RESET nl2;
}


//	convertor . brain

static void	Brain(const std::string & s)
{
	_Scalar_	sc;
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

	bool	(*mode_convertor[4]) (const std::string &, _Scalar_ *) =
	{
		& castChar,
		& castInt,
		& castFloat,
		& castDouble
	}

	i = -1;
	while (++i < 4)
	{
		if (mode_isLiteral[i](s))
			return (mode_covertor[i](s, & SC), printer(& SC));
	}
	std::cout << YELL "convertion failed. " nl2 RESET ;
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

static bool	isMacroFloat(const std::string & s)
{
	return (s == "inff" || s == "-inff" || s == "+inff" || s == "nanf");
}

static bool	isMacroDouble(const std::string & s)
{
	return (s == "inf" || s == "-inf" || s == "+inf" || s == "nan");
}


//	Type casting:
//		char 
//		digit (int) 
//		float 
//		double

static void	castChar(const std::string & s, _Scalar_ *sc)
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

static void	castInt(const std::string & s, _Scalar_ *sc)
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

static void	castFloat(const std::string & s, _Scalar_ *sc)
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

static void	castDouble(const std::string &, _Scalar_ *sc)
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


//	printer

static void	printer(_Scalar_ *sc)
{
	std::cout << "char: ";
}
