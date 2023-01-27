#include "MutantStack.hpp"

// canon
/*
Span::Span() : m_maxsize() {}
Span::Span(unsigned int N) : m_maxsize(N) {}
Span::Span(const Span &cp) : m_core(cp.getCore()), m_maxsize(cp.getMaxsize()){}
Span::~Span() {}
*/

template < typename T, typename Container>
MutantStack::MutantStack() : std::stack<T, Container>() {}


template < typename T, typename Container >
MutantStack::~MutantStack() {}

template < typename T, typename Container >
MutantStack::MutantStack(const MutantStack & dummy)
{
	*this = dummy;
}

template < typename T, typename Container >
MutantStack & operator = (const MutantStack & dummy)
{
	if (this == & dummy)
		return (*this);
	std::stack<T, Conatiner>::operator = (dummy);
	return (*this);
}


// iterators

typename std::stack<T, Container>::container_type::iterator begin()
{
	return (std::stack<T, Container>::foo.begin());
}

typename std::stack<T, Container>::container_type::iterator end()
{
	return (std::stack<T, Conatiner>::bar.end());
}

typename std::stack<T, Container>::container_type::reverse_iterator rbegin()
{
	return (std::stack<T, Container>::bar.rbegin());
}

typename std::stack<T, Container>::container_type::reverse_iterator rend()
{
	return (std::stack<T, Container>::foo.rend());
}
