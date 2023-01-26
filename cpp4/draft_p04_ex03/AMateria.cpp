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


// default

AMateria::AMateria() {}
AMateria::~AMateria() {}


// copy
AMateria::AMateria(const AMateria & copy)
{
	* this = copy;
}


// copy by =
AMateria & AMateria::operator = (const AMateria & dummy)
{
	m_type = dummy.m_type;
	return *this;
}


// param constr
AMateria::AMateria(const std::string & type) : m_type(type) {}


// Getter
std::string const & AMateria::getType() const
{
	return m_type;
}


