#include "iostream"

#define Print(add, val) std::cout << add << ' ' << val << std::endl

void	Increment_type1(int *);
void	Increment_type2(int &);

int	main()
{
	int	num = 42;
	int&	ref = num;

	Print(&ref, ref);

	std::cout << '\n';

	// change of value

	ref = 10;
	Print(&ref, ref);
	Print(&num, num);

	std::cout << '\n';

	// increment the alias (ref) of num -- non-reference way

	Increment_type1(&ref);
	Print(&ref, ref);
	Print(&num, num);

	std::cout << '\n';

	// increment using Reference

	Increment_type2(ref);
	Print(&ref, ref);
	Print(&num, num);
}

//

void	Increment_type2(int& n)
{
	++n;
}

void	Increment_type1(int* n)
{
	++(*n);
}
