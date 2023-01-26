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

#include "Character.hpp"


// default

Character::Character() // private
{
	size_t	i = -1;

	while (++i < MAXINV)
	{
		m_inventory[i] = NULL;
	}
}

Character::~Character()
{
	size_t	i = -1;

	while (++i < MAXINV)
	{
		if (!dummy.m_inventory[i])
			continue ;
		
		delete	m_inventory[i] ;
		
		m_inventory[i] = 0;
	}
}


// copy
Character::Character(const Character & dummy)
{
	size_t	i = -1;

	while (++i < MAXINV)
	{
		if (!dummy.m_inventory[i])
			continue ;
		m_inventory[i] = dummy.m_inventory[i];
	}
}


// copy by =
Character & Character::operator = (const Character & dummy)
{
	size_t	i;

	if (this == & dummy)
		return (*this);
	m_name = dummy.m_name;
	i = -1;
	while (++i < MAXINV)
	{
		if (m_inventory[i])
		{
			delete	m_inventory[i];
		}
		if (!dummy.m_inventory[i])
			continue ;
		m_inventory[i] = dummy.m_inventory[i];
	}
	return (*this);
}


// param constr

Character::Character(std::string name) : m_name(name)
{
	size_t	i = -1;

	while (++i < MAXINV)
	{
		m_inventory[i] = NULL;
	}
}


// Getter

std::string const & Character::getName() const
{
	return m_name;
}


// Methods

void	Character::equip(AMateria *ma)
{
	size_t	i;

	if (!ma)
	{
		std::cout << "nothing is equiped. " LOWKEY "(tried to equip " << ma << ") \n" RESET;
		return ;
	}
	i = -1;
	while (++i < MAXINV)
	{
		if (m_inventory[o])
			continue ;
		m_inventory[i] = ma;
		return ;
	}
	std::cout << "Inventory full! \n";
}
