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

#ifndef CURE_HPP
# define CURE_HPP

# include "iostream"
# include "AMateria.hpp"


class	Cure : public AMateria // TODO
{

public:

	// canon
	Cure();
	~Cure(); // TODO no virtual
	Cure(const Cure &);
	Cure & operator = (const Cure &);
	
	// Cure(const std::string &); // XXX no field constructor
	// std::string const & getType() const; // XXX no getter

	Cure	*clone() const = 0; // XXX no
	void	use(ICharacter &); // XXX virtual

};


#endif
