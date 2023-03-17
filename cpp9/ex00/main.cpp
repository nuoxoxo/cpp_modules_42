#include "iostream"
#include "BitcoinExchange.hpp"

int	main(int c, char **v)
{
	bool			title_checked = false;
	std::ifstream		ifs;
	std::ofstream		ofs;
	std::string		input, data;
	std::string		s, res, line;
	std::map<std::string, double>	dict;

	// std::string	L, R;

	if (!_check_params_(c, v))
		return (printerr("could not open file."), 1);
		// return (printerr("could not open input."), 1);


	// open data.csv
	data = "data.csv";
	if (ifs.is_open())
		ifs.close();
	ifs.open(data.c_str());
	if (ifs.fail())
		return (printerr(), 1);

	getline(ifs, line); // jettison the headline
	while (!ifs.eof() && getline(ifs, line))
	{
		std::string	lhs = line.substr(0, line.find(","));
		std::string	rhs = line.substr(line.find(",") + 1);

		dict[ lhs ] = atof( rhs.c_str() );
	}


	// open input.txt
	input = std::string(v[1]);
	if (ifs.is_open())
		ifs.close();
	ifs.open(input.c_str());
	if (ifs.fail())
		return (printerr(), 1);


	// read input
	while (!ifs.eof() && getline(ifs, line))
	{
		s = remove_whitesp(line);
		if ( ! title_checked && title_is_valid(s))
		{
			title_checked = true;
			continue ;
		}
		else if ( ! query_is_valid(s))
		{
			printerr("bad input => " + line /* original line */);
		}
		else if ( ! number_check(s))
		{
			;;
		}
		else
		{
			std::string	key = s.substr(0, s.find("|"));
			std::string	valstr = s.substr(s.find("|") + 1);
			double		val = atof(valstr.c_str());

			if (dict.count(key))
			{
				res = to_string(to_double_round_2(dict[key] * val));
				double R = to_double_round_2(dict[key] * val);
				if (res[res.length() - 1] == '0')
					res = res.substr(0, res.length() - 1);

				std::cout << key << " => " << valstr << " = " YELLOW;
				if (res.find("+") != std::string::npos)
					std::cout << std::setprecision(PRECISION) << R << std::defaultfloat << nlreset;
				else
					std::cout << res << nlreset;
			}
			else
			{
				std::map<std::string, double>::iterator it = dict.upper_bound(key);

				if (it == dict.begin())
				{
					std::cout << key << " => " << valstr << " = 0" nl;
				}
				else
				{
					it--;
					double R = to_double_round_2(it->second * val);
					res = to_string(to_double_round_2(it->second * val));
					if (res[res.length() - 1] == '0')
						res = res.substr(0, res.length() - 1);

					std::cout << key << " => " << valstr << " = " YELLOW;
					if (res.find("+") != std::string::npos)
						std::cout << std::setprecision(PRECISION) << R << std::defaultfloat << nlreset;
					else
						std::cout << res << nlreset;

				}

			}
		}
	}

}

