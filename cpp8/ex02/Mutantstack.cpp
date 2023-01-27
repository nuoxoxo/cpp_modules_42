#include "MutantStack.hpp"

// canon

MutantStack::MutantStack() {}
MutantStack::~MutantStack() {}

MutantStack::MutantStack(const MutantStack & dummy)
{
	*this = dummy;
}

MutantStack & operator = (const MutantStack & dummy)
{
	if (this == & dummy)
		return (*this);
	std::stack<T, Conatiner>::operator = (dummy);
	return (*this);
}
