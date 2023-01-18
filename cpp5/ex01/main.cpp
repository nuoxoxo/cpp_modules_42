#include "_Cpp05_.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main()
{
	int	count = 0;
	
	{
		Form	form("form", 42);
	}
	print_ending(++count, "default");
}
