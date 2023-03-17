#include "iostream"
#include "sstream"
#include "stack"//"deque"
#include "RPN.hpp"

#include "cassert"
//#include "string" // std::to_string

using	namespace std;

string	calc(string);
bool	isnumeric(string);
void	test(string, string);


// drive

int	main(int c, char **v)
{
	if (c == 2)
	{
		test(v[1], "");
		return 0;
	}
	test("8 9 * 9 - 9 - 9 - 4 - 1 +", "42");
	test("7 7 * 7 -", "42");
	test("(1 + 1)", "Error");
	test("10 6 9 3 + -11 * / * 17 + 5 +", "22");

	test("3 4 +", "7");
	test("3 5 6 + *", "33");
	test("3 10 5 + *", "45");
}


// helpers

void	test(string expr, string compare)
{
	string	res = calc(expr);

	cout
	<< "expression: "
	<< YELLOW << expr << nlreset
	<< "result: "
	<< GREEN << calc(expr) << nlreset;

	if (compare != "")
	{
		assert(res == compare);
	}

}

//to_string not include in c++98
template<typename T>
std::string to_string(const T & value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

string	calc(string line)
{
	stack<string>	E;
	string		s;
	stringstream	ss(line);
	while (!ss.eof() && ss >> s)
	{
		if (s == "+" || s == "-" || s == "*" || s == "/")
		{
			int	r = 0, l = 0;
			if (E.size())
			{
				stringstream(E.top()) >> r;
				E.pop();
			}
			if (E.size())
			{
				stringstream(E.top()) >> l;
				E.pop();
			}
			if (s == "+")
				E.push(to_string(l + r));
			else if (s == "-")
				E.push(to_string(l - r));
			else if (s == "*")
				E.push(to_string(l * r));
			else if (s == "/")
				E.push(to_string(l / r));
		}
		else if ( ! isnumeric(s))
		{
			if ((s[0] == '+' || s[0] == '-')
			&& isnumeric(s.substr(1)))
				E.push(s.substr(1));
			else
				return "Error";
		}
		else if (isnumeric(s))
			E.push(s);
	}
	return E.top();
}

bool	isnumeric(string s)
{
	size_t	i = -1;
	while (++i < s.length())
	{
		if (s[i] < '0' || s[i] > '9')
			return false;
	}
	return true;
}
