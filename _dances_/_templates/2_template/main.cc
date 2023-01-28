#include "iostream"
#include "beautify.hh"

using	namespace std;

/*
void printer(string s)	{ cout << s << grey << __FUNCTION__ << called; }
void printer(double d)	{ cout << d << grey << __FUNCTION__ << called; }
void printer(float f)	{ cout << f << grey << __FUNCTION__ << called; }
void printer(int i)	{ cout << i << grey << __FUNCTION__ << called; }
*/

template<typename T>
void printer(T bocal) {cout << bocal << grey << __FUNCTION__ << called; }

int	main()
{
	cout << green nl "Test :: template " reset nl nl;

	string	s = "hello 42";

	printer(s);
	printer(42);
	printer(42.42);
	printer(42.42f);
}
