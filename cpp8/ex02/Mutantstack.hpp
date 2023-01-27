#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include "iostream"
# include "deque"
# include "stack"

// definition in cppreference
// template<class T, class Container = std::deque<T>> class stack;

template < typename T, typename Container = std::deque<T> >
class	MutantStack : public std::stack<T, Container>
{
public:
	// canon
	MutantStack();
	MutantStack(const MutantStack &);
	MutantStack & operator = (const MutantStack &);
	~MutantStack();

	// iterator-pairs
	typename std::stack<T, Container>::container_type::iterator begin();
	typename std::stack<T, Container>::container_type::iterator end();
	typename std::stack<T, Container>::container_type::reverse_iterator rbegin();
	typename std::stack<T, Container>::container_type::reverse_iterator rend();
}
