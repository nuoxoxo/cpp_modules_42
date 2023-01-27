#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include "iostream"
# include "deque"
# include "stack"

// definition in cppreference
// template<class T, class Container = std::deque<T>> class stack;

template <typename T>
class 	MutantStack : public std::stack<T>
{
public:
	// canon
	MutantStack();
	MutantStack(const MutantStack &);
	MutantStack & operator = (const MutantStack &);
	~MutantStack();

	// methods
	int		size() const;

	void		push(T);
	void		pop();
	bool		empty() const;
	const T &	top( void ) const;

	// iterators
	typedef typename std::deque<T>::iterator iterator;

	typename std::deque<T>::iterator	begin();
	typename std::deque<T>::iterator	end();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T> () {}

template <typename T>
MutantStack<T>::~MutantStack<T> () {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & dummy)
{
	*this = dummy;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator = (const MutantStack<T> & dummy)
{
	this->c = dummy.c;
	return (*this);
}



template <typename T>
const T & MutantStack<T>::top() const
{
	return (this->c.back());
}

template <typename T>
bool	MutantStack<T>::empty() const
{
	return (this->c.empty());
}

template <typename T>
void	MutantStack<T>::push(T item) {
	this->c.push_back(item);
}

template <typename T>
void	MutantStack<T>::pop() {
	this->c.pop_back(); // undefined if empty
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (typename std::deque<T>::iterator(this->c.begin()));
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (typename std::deque<T>::iterator(this->c.end()));
}

/*Span::Span() : m_maxsize() {}
Span::Span(unsigned int N) : m_maxsize(N) {}
Span::Span(const Span &cp) : m_core(cp.getCore()), m_maxsize(cp.getMaxsize()){}
Span::~Span() {}*/

/*
template<typename T>
typename T::iterator	easyfind(T arr, int val)
*/


#endif
