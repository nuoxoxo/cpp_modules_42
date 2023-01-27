#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

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
	unsigned int	size() const;

	void		push(T);
	void		pop();
	bool		empty() const;
	const T &	top( void ) const;

	// iterators
	typedef typename std::deque<T>::iterator iterator;

	typename std::deque<T>::iterator	begin();
	typename std::deque<T>::iterator	end();
};

# include "MutantStack.tpp"

#endif
