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
#include "Array.tpp"

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
	unsigned int length() const;
};
