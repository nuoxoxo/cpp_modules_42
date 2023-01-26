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

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "iostream"

class	AMateria
{

protected:
	
	std::string	m_type;

public:

	// canon
	AMateria();
	virtual	~AMateria();
	AMateria(const AMateria &);
	AMateria & operator = (const AMateria &);
	
	// param constr
	AMateria(const std::string &);

	// getter
	std::string const & getType() const;


	virtual	AMateria	*clone() const = 0;

	// virtual	void		use(ICharacter &);
};

#endif
