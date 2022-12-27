#include "iostream"

#define Print(add, val) std::cout << add << ' ' << val << std::endl

int	main()
{
	int	num = 42;

	void	*void_pointer = &num;
	int	*int_pointer = &num;

	Print(void_pointer, *(int *) void_pointer); // here's how to cast
	Print(int_pointer, *int_pointer);

	*int_pointer = 11;
	Print(int_pointer, *int_pointer);
}
