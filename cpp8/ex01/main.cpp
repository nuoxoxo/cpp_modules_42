#include "CPP08X01.hpp"
#include "Span.hpp"
#include "iostream"
#include "utility" // test
/*
static std::pair<int, int>	min_diff_pair(std::vector<int>);
static void print_pair(std::pair<int, int>, const std::string);
*/
int	main()
{
	int	i = -1;

	std::cout << GREEN "Test :: " << ++i << " :: subject " nl2reset;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << nl2;
	}
	std::cout << GREEN "Test :: " << ++i << " :: restatement " nl2reset;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << nl2;

		std::pair<int, int> pmin = min_diff_pair(sp.getCore());
		std::pair<int, int> pmax = max_diff_pair(sp.getCore());
		print_pair(pmin, "shortest span");
		print_pair(pmax, "longest span");
	}

}
