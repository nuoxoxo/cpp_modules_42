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
	typedef typename std::deque<T>::iterator		iterator;
	typedef typename std::deque<T>::reverse_iterator	r_iterator;
	typedef typename std::deque<T>::const_iterator		c_iterator;
	typedef typename std::deque<T>::const_reverse_iterator	cr_iterator;

	typename std::deque<T>::iterator		begin();
	typename std::deque<T>::iterator		end();
	typename std::deque<T>::reverse_iterator	rbegin();
	typename std::deque<T>::reverse_iterator	rend();

	typename std::deque<T>::const_iterator		begin() const;
	typename std::deque<T>::const_iterator		end() const;
	typename std::deque<T>::const_reverse_iterator	rbegin() const;
	typename std::deque<T>::const_reverse_iterator	rend() const;
};

# include "MutantStack.tpp"

// ************* what do we need *************
// 
// push
// pop
// top
// size
// begin
// endi
// 
/*
mstack.push(5);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
*/

#endif
