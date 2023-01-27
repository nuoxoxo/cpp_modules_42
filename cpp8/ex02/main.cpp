#include "MutantStack.hpp"
#include "color.hpp"

int	main()
{
	int	i = -1;

	std::cout << GREEN "Test :: " << ++i << " :: subject " nl2reset;
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		//[...]

		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << LOWKEY "printing stack ..." nl RESET;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int>	s(mstack);
		std::cout << nl;
	}
	std::cout << GREEN "Test :: " << ++i << " :: reverse iterator " nl2reset;
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		//[...]

		mstack.push(0);

		MutantStack<int>::r_iterator it = mstack.rbegin();
		MutantStack<int>::r_iterator ite = mstack.rend();

		++it;
		--it;

		std::cout << LOWKEY "printing stack ..." nl RESET;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int>	s(mstack);
	}
}
