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

#include "Cure.hpp"


// Canon


Cure::Cure() : AMateria("cure") {} // XXX inherits A.M.T.
Cure::~Cure() {}


Cure::Cure(const Cure & copy)
{
	* this = copy;
}


Cure & Cure::operator = (const Cure & dummy)
{
	m_type = dummy.m_type;
	return *this;
}


// Cure::Cure(std::string t) : m_type(t) {} // XXX no field constructor
// std::string const & Cure::getType() const { return m_type; } // XXX no getter


// method


void	Cure::use(ICharacter & them)
{
	std::cout << "* heals" << target.getName() << "'s wounds * \n";
}


