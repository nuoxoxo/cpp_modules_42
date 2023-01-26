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
/*                           Abstrac Class (AClass)                           */
/*                             Interface (IClass)                             */
/*                                                                            */
/*                                                                            */
/* *********************  ʕ • ᴥ•ʔ  mode: todo  (⊙. ⊙ )  ********************* */

#include "Ice.hpp"


// Canon


Ice::Ice() : AMateria("ice") {} // XXX inherits A.M.T.
Ice::~Ice() {}


Ice::Ice(const Ice & copy)
{
	* this = copy;
}


Ice & Ice::operator = (const Ice & dummy)
{
	m_type = dummy.m_type;
	return *this;
}


// Ice::Ice(std::string t) : m_type(t) {} // XXX no field constructor
// std::string const & Ice::getType() const { return m_type; } // XXX no getter


// methods

void	Ice::use(ICharacter & dummy) const
{
	std::cout << "* shoots an ice bolt at " << dummy.getName() << " * \n";
}


AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}


