#include "iostream"
#include "Span.hpp"
#include "utility" // test

#define nl "\n"

static std::pair<int, int>	min_diff_pair(std::vector<int>);

int	main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::pair<int, int>	p = min_diff_pair(sp.getCore());

	std::cout << p.first << " ~ " << p.second << nl;
}

static void	print_pair(std::pair<int, int> p)
{
	std::cout << p.first << " ~ " << p.second << nl;
	std:
}

static std::pair<int, int>	min_diff_pair(std::vector<int> v)
{
	int	d = 2147483647, df, l, r;
	int	i = 0;

	std::sort(v.begin(), v.end());
	while (++i < (int) v.size())
	{
		df = v[i] - v[i - 1];
		if (d > df)
		{
			d = df;
			r = v[i];
			l = v[i - 1];
		}
	}
	return (std::make_pair(l, r));
}
