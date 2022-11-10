#include "iostream"
#include "string"

int	main()
{
	int			x;
	std::string		s;

	std::cout << "enter an int & a string: ";
	std::cin >> x;
	std::getline(std::cin, s);
	std::cout << "your integer:\t" << x << std::endl;
	std::cout << "your string:\t" << s << std::endl;
}
