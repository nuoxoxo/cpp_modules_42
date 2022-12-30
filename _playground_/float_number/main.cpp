#include "iostream"

# define yell	"\x1b[33m"
# define cy	"\x1b[36m"
# define rest	"\x1b[0m"
# define nl2	"\n\n"

using namespace std;

int	main()
{
	float	f;

	f = 42.42;
	cout << yell "42.42 and 256 * 42.42 " rest << endl;
	cout << f << endl;
	cout << 256 * f << nl2;

	f = 42.42f;
	cout << "w/ an f : " cy "42.42f and 256 * 42.42f " rest << endl;
	cout << f << endl;
	cout << 256 * f << nl2;

	f = 369.369;
	cout << "3 decimal pts : " cy "369.369 and 100 * 369.369"
		rest << endl;
	cout << f << endl;
	cout << 100 * f << nl2;

	f = 369.369f;
	cout << "3 decimal pts w/ an f : " cy "369.369f and 100 * 369.369f"
		rest << endl;
	cout << f << endl;
	cout << 100 * f << nl2;

	f = 1234.4321;
	cout << "4 decimal pts : " cy "1234.4321 and 1000 * 1234.4321"
		rest << endl;
	cout << f << endl;
	cout << 1000 * f << nl2;

	f = 1234.4321f;
	cout << "4 decimal pts w/ an f : " cy "1234.4321f and 1000 * 1234.4321f"
		rest << endl;
	cout << f << endl;
	cout << 1000 * f << nl2;
}
