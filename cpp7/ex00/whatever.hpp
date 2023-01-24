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
/*                                 Template                                   */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* *********************  ʕ • ᴥ•ʔ  mode: todo  (⊙. ⊙ )  ********************* */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include "iostream"

# define nl "\n"
# define nl2 "\n\n"

template<T>
void	swap(T & a, T & b)
{
	std::cout << "(" << __FUNCTION__ << " called) " nl;
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
const	T & min(const T & a, const T & b)
{
	// std::cout << __FUNCTION__ << " called" nl2;
	return (a < b ? a : b);
}

template<typename T>
const	T & max(const T & a, const T & b)
{
	// std::cout << __FUNCTION__ << " called" nl2;
	return (a > b ? a : b);
}

#endif

