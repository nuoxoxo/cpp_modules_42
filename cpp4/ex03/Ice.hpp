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

#ifndef ICE_HPP
# define ICE_HPP

# include "iostream"
# include "AMateria.hpp"


class	Ice : public AMateria // TODO
{

public:

	// canon
	Ice();
	~Ice(); // TODO no virtual
	Ice(const Ice &);
	Ice & operator = (const Ice &);
	
	// Ice(const std::string &); // XXX no field constructor
	// std::string const & getType() const; // XXX no getter

	AMateria	*clone() const; // XXX no virtual no `const = 0`
	void		use(ICharacter &) const; // XXX virtual

};


#endif
