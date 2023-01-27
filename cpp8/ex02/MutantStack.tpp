#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

# include "MutantStack.hpp"

template<typename T> MutantStack<T>::MutantStack() : std::stack<T>() {}
template<typename T> MutantStack<T>::~MutantStack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack & dummy)
{
	*this = dummy;
}

template<typename T>
MutantStack<T> & MutantStack<T>::operator = (const MutantStack<T> & dummy)
{
	this->c = dummy.c;
	return (*this);
}

// size
template<typename T>
unsigned int	MutantStack<T>::size() const { return (this->c.size()); }

// top
template<typename T>
const T & MutantStack<T>::top() const	{ return (this->c.back()); }

// empty
template<typename T>
bool	MutantStack<T>::empty() const	{ return (this->c.empty()); }

// push & pop
template<typename T>
void	MutantStack<T>::push(T item)	{ this->c.push_back(item); }

template<typename T>
void	MutantStack<T>::pop()	{ this->c.pop_back(); } // undefined if empty

// begin & end
template<typename T>
typename MutantStack<T>::iterator 
MutantStack<T>::begin()	{ return (iterator(this->c.begin())); }

template<typename T>
typename MutantStack<T>::iterator
MutantStack<T>::end()	{ return (iterator(this->c.end())); }

// rbegin & rend

template<typename T>
typename MutantStack<T>::riterator 
MutantStack<T>::rbegin(){ return (riterator(this->c.rbegin())); }

template<typename T>
typename MutantStack<T>::riterator
MutantStack<T>::rend()	{ return (riterator(this->c.rend())); }

#endif
