#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include "iostream"
# include "deque"
# include "stack"

// definition in cppreference
// template<class T, class Container = std::deque<T>> class stack;

template <typename T>
class	MutantStack : public std::stack<T>
{
public :
	// canon
	MutantStack() : std::stack<T>() { }
	MutantStack(const MutantStack & ref) : std::stack<T>(ref) {}
	~MutantStack() {}
	MutantStack & operator = (const MutantStack & dummy) { *this = dummy; }

	typename std::stack<T>::container_type::iterator		begin();
	typename std::stack<T>::container_type::iterator		end();

	typename std::stack<T>::container_type::reverse_iterator	rbegin();
	typename std::stack<T>::container_type::reverse_iterator	rend();

	typename std::stack<T>::container_type::const_iterator		begin() const;
	typename std::stack<T>::container_type::const_iterator		end() const;
	
	typename std::stack<T>::container_type::const_reverse_iterator	rbegin() const;
	typename std::stack<T>::container_type::const_reverse_iterator	rend() const;

};

/*Span::Span() : m_maxsize() {}
Span::Span(unsigned int N) : m_maxsize(N) {}
Span::Span(const Span &cp) : m_core(cp.getCore()), m_maxsize(cp.getMaxsize()){}
Span::~Span() {}*/

/*
template<typename T>
typename T::iterator	easyfind(T arr, int val)
*/

template<typename T>
typename std::stack<T>::container_type::iterator	begin()
{
	return this->c.begin();
}

template <typename T>
typename std::stack<T>::container_type::iterator	end()
{
	return this->c.end();
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack::rbegin() const
{
	return this->c.begin();
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack::rend() const
{
	return this->c.end();
}
/*
template <typename T>
std::stack<T>::container_type::const_iterator	rbegin() const
{
	return this->c.rbegin();
}

template <typename T>
std::stack<T>::container_type::const_iterator	rend() const
{
	return this->c.rend();
}

template <typename T>
std::stack<T>::container_type::const_reverse_iterator	rbegin() const
{
	return this->c.rbegin();
}

template <typename T>
std::stack<T>::container_type::const_reverse_iterator	rend() const
{
	return this->c.rend();
}
*/

#endif
