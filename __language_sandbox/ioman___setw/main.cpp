#include "iostream"
#include "sstream"
#include "iomanip"

int	main()
{
	std::cout << "no setw: [" << 42 << "]\n"
	<< "setw(6): [" << std::setw(6) << "]\n"
	<< "setw(6): [" << std::setw(6) << 42 << "]\n"
	<< "setw(6): [" << 89 << std::setw(6) << 12 << 34 << "]\n"
	<< "setw(6): [" << 89 << 64 << std::setw(6) << 12 << 34 << "]"
	<< std::endl;
}
