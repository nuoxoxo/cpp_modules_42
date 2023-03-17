#include "BitcoinExchange.hpp"


//	helpers :: to be put in hpp

template<typename T>
std::string to_string(const T value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

std::string to_string(double const value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

std::string	remove_whitesp(std::string & line)
{
	std::string	res;
	int		i = -1;

	while (++i < (int) line.length())
	{
		if (!(line[i] == ' ' || (line[i] < 14 && line[i] > 8)))
			res += line[i];
	}

	return (res);
}

double to_double_floor_2(double f)
{
    double L = (int) (f * 100);
    double R = (double) L / 100;
    return (R);
}


double to_double_round_2(double f)
{
    double L = (int) (f * 100 + .5);
    double R = (double) L / 100;
    /*
    std::cout << f << "\n" ;
    std::cout << L << " - " << R << "\n" ;
    */
    return (R);
}


bool	number_check(std::string & s)
{
	std::string	number;

	if (!query_is_valid(s))
		return (false);
	number = s.substr(11, (int) s.length() - 11); // minur 2 sp
	// number = s.substr(13, (int) s.length() - 13);

	double			d;
	long long		i;
	std::stringstream	ssd(number);
	std::stringstream	ssi(number);

	ssd >> std::noskipws >> d;
	ssi >> std::noskipws >> i;
	if ((!ssd.eof() || ssd.fail()) && (!ssi.eof() || ssi.fail()))
	{
		printerr("not a number.");
	}
	if (d < 0 || i < 0)
	{
		printerr("not a positive number.");
		return (false);
	}
	else if (i > 1000 /* 2147483647 */)
	{
		printerr("too large a number.");
		return (false);
	}

	return (true);
}


bool	query_is_valid(std::string & s)
{
	std::string	date;
	std::string	number;

	if ((int) s.length() < 11)
		return (false);
	if (s[10] != '|')
		return (false);
	date = s.substr(0, 10);
	if ( ! date_is_valid(date))
		return (false);

	return (true);
}


bool	title_is_valid(std::string & s)
{
	std::string	title_input;

	if ((int) s.length() > 12)
	{
		title_input = s.substr(0, 12);
		if (title_input != "date | value")
			return (false);
	}

	return (true);
}


bool	date_is_valid(std::string & s)
{
	std::string	s1, s2, s3;
	char		hyp1, hyp2;
	int		year, month, day;

	// length-10 check
	if ((int) s.length() ^ 10)
		return (false);

	// hyphens '-'
	hyp1 = s[4];
	hyp2 = s[7];
	if (hyp1 != '-' || hyp2 != '-')
		return (false);

	// year
	s1 = s.substr(0, 4);
	if (!isnumeric(s1))
		return (false);

	// month
	s2 = s.substr(5, 2);
	if (s2[0] != '0' && s2[0] != '1')
		return (false);
	if (s2[0] == '0' && s2[1] == '0')
		return (false);
	if (s2[0] == '1' && s2[1] != '0' && s2[1] != '1' && s2[1] != '2')
		return (false);

	// day
	s3 = s.substr(8, 2);
	if (!isnumeric(s3))
		return (false);
	std::stringstream(s3) >> day;
	if (day < 1 || day > 31)
		return (false);

	// valid date check
	int	months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	std::stringstream(s1) >> year;
	std::stringstream(s2) >> month;
	if (!(year % 400) || (year % 100 && ! (year % 4)))
		months[1] = 29;
	if (day > months[month])
		return (false);

	return (true);
}


bool	isnumeric(std::string & s)
{
	size_t	i = -1;
	while (++i < s.length())
	{
		if (s[i] < '0' || s[i] > '9')
			return false;
	}
	return true;
}


bool	_check_params_(int c, char *v[])
{
	std::string	filename;

	if (c ^ 2)
		return (printerr(), false);
	filename = std::string(v[1]);
	if (filename == "")
		return (printerr(), false);

	return true;
}


void	printerr(std::string msg)
{
	std::cout << "Error";
	if (msg != "")
		std::cout << ": " << COLOR << msg;
	std::cout << nlreset;
}

