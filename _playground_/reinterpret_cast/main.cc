#include "iostream"

using	namespace std;

int	main()
{
	int	*v;
	char	*c;

	*v = 65;
	c = reinterpret_cast<char *>(v);
	cout << *v << endl;
	cout << *c << endl;
}
