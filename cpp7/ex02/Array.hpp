/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                             ~  ~  ~  ~  ~    ~                             */
/*                              ~    _ ~ _   o>                               */
/*                             ~  \ / \ / \ /  ~                              */
/*                              ~  ~      ~    ~                              */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                   Array                                    */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* *********************  ʕ • ᴥ•ʔ  mode: todo  (⊙. ⊙ )  ********************* */

#ifndef ARRAY_HPP
#define	ARRAY_HPP

#include "iostream"
#include "cstdlib"
// #include "Array.tpp"

template<typename T>
class	Array
{
private:
	T		* m_array;
	unsigned int	m_size();
	unsigned int	m_length();

public:
	// canon
	Array();
	~Array();
	Array(const Array &);
	Array & operator = (const Array &);

	// param constr
	Array(const unsigned int &); 
	
	// []
	T & operator [] (unsigned int);
	
	// length / size
	unsigned int size() const;
	unsigned int length() const; // naive impl
};


/* ************ TPP implementation ************ */

// constr

template<typename T>

Array<T>::Array(void) : m_size(), m_length(), m_array(new T[0]) {}

// param constr

template<typename T>

Array<T>::Array(const unsigned int & s) : m_size(s), m_length(s), m_array(new T[s]) {}

// destr

template<typename T>

Array<T>::~Array(void)
{
	if (this->_array)
		delete [] this->_array;
}

// copy constr

template<typename T>

Array<T>::Array(const Array & dummy)
{
	unsigned int	temp = dummy.size(), i = -1;

	this->m_array = new T[temp];
	this->m_size = temp;
	this->m_length = temp;
	while (++i < temp)
		this->m_array[i] = dummy.m_array[i];
}

// copy assignment

template<typename T>

Array<T> & Array<T>::operator = (const Array & dummy)
{
	unsigned int	size, i;

	if (this == & dummy)
		return (*this);
	if (this->m_array)
		delete [] this->m_array;
	size = dummy.size();
	this->m_array = new T[size];
	this->m_size = size;
	this->m_length = size;
	i = -1;
	while (++i < size)
		this->m_array[i] = dummy.m_array[i];
	return (*this);
}

// size

template<typename T>

unsigned int Array<T>::size() const
{
	return (this->m_size);
}

template<typename T>

unsigned int Array<T>::length() const
{
	return (this->m_size);
}

// []

template<typename T>
T & Array<T>::operator [] (unsigned int i)
{
	if (i > m_size - 1)
		throw std::exception();
	return (this->m_array[i]);
}

#endif
