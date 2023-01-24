#include "iostream"
#include "vector"

using	namespace std;

template<typename T>
void	print(const T & n)
{
	try
	{
		cout << n << endl;
	}
	catch (const std::exception & e)
	{
		;;
	}
}

int	main()
{
	vector<int>	v(3, 0);

	// print(v); // uncaught error
	print(42.42f);
}
