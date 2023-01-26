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

#include "AMateria.hpp"


// Canon


AMateria::AMateria() {}
AMateria::~AMateria() {}


AMateria::AMateria(const AMateria & copy)
{
	* this = copy;
}


AMateria & AMateria::operator = (const AMateria & dummy)
{
	m_type = dummy.m_type;
	return *this;
}


// param constr


AMateria::AMateria(const std::string & t) : m_type(t) {}


// Getter


std::string const & AMateria::getType() const
{
	return m_type;
}


// void	AMateria::use(ICharacter & target) { (void) target; } // Leave blank . XXX


