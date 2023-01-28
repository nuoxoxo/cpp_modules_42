#include "iostream"
#include "beautify.hh"

using	namespace std;

template<typename T>
void printer(T bocal) {cout << bocal << grey << __FUNCTION__ << called; }

int	main()
{
	cout << green nl "Test :: template argument " reset nl nl;
	
	string	s = "hello 42";

	printer<string>(s);
	printer<int>(42);
	printer<double>(42.42);
	printer<float>(42.42f);
}
