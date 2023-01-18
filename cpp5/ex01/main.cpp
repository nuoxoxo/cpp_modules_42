#include "_Cpp05_.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main()
{
	int	count = 0;
	
	{
		Form	bail("bail", 42, 12);

		std::cout << bail;
	}
	print_ending(++count, "default");
}
