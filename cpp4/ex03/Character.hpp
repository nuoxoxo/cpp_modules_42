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

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "iostream"
# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Character : public ICharacter
{

private:
	
	Character(); // XXX _ Important _

	std::string	m_name;
	AMateria	* m_inventory[4];

public:

	// canon
	// Character(); // no default constr
	~Character();
	Character(const Character &);
	Character & operator = (const Character &);
	
	// param constr
	Character(std::string &);

	// getter
	std::string const & getType() const;

	// methods
	virtual Character	*clone() const = 0;
	virtual void		use(ICharacter &) const = 0;
};

#endif

