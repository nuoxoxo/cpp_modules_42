/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: 2023/01/09 14:55:42 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


//  Default

ClapTrap::ClapTrap() : m_name("_anonymous_")
{
    this->m_hitPoints = 10;
    this->m_energyPoints = 10;
    this->m_attackDamage = 0;

    std::cout << WHITE "ClapTrap constructor" << called REST;
}

ClapTrap::~ClapTrap()
{
    std::cout << WHITE "ClapTrap " << ITAL << m_name << REST << " destructor" << called REST;
}


//  Copy

ClapTrap::ClapTrap(ClapTrap const & other)
{
    *this = other;

    std::cout << WHITE "Copy ClapTrap constructor" << called REST;
}


// Copy assignment =

ClapTrap & ClapTrap::operator = (ClapTrap const & other)
{
    std::cout << WHITE "ClapTrap: Copy assignment operator" << called REST;
    
    if (this == & other)
        return *this;
    
    this->m_name = other.m_name;
    this->m_hitPoints = other.m_hitPoints;
    this->m_energyPoints = other.m_energyPoints;
    this->m_attackDamage = other.m_attackDamage;

    return (*this);
}


//  Constructor overload

ClapTrap::ClapTrap(std::string name) : m_name(name)
{
    this->m_hitPoints = 10;
    this->m_energyPoints = 10;
    this->m_attackDamage = 0;

    std::cout
        << WHITE "ClapTrap " << ITAL << m_name << REST
        << WHITE " constructor" << called REST;
}


//  Game

void    ClapTrap::attack(const std::string & other_name)
{
    if (this->m_energyPoints < 1)
    {
        std::cout << NOENERGY;
        return ;
    }
    if (this->m_hitPoints < 1)
    {
        std::cout << NOATTACK;
        return ;
    }
    printAttack(other_name);
    this->m_energyPoints -= 1;
}

void    ClapTrap::takeDamage(unsigned int num)
{ 
    printDamage(num);

    this->m_hitPoints -= num;
    
    if (this->m_hitPoints < 1)
        std::cout << NOATTACK;
    else
        printCurrentHitPts();
}

void    ClapTrap::beRepaired(unsigned int num)
{
    this->m_hitPoints += num;
    this->m_energyPoints += num - 1;

    printRepair(num);
    printCurrentHitPts();
    printCurrentEnergyPts();

}


//  Getter {{ obsolete }}

std::string ClapTrap::getName() const
{
    return (this->m_name);
}

int ClapTrap::getDama() const
{
    return (this->m_attackDamage);
}

//  Printers    {{ state }}

void    ClapTrap::printCurrentHitPts()
{
    std::cout
        << "ClapTrap " << ITAL << m_name << REST
        << CYAN " currently has " << m_hitPoints << " hit points \n" REST;
}

void    ClapTrap::printCurrentEnergyPts()
{
    std::cout
        << "ClapTrap " << ITAL << m_name << REST
        << CYAN " currently has " << m_energyPoints << " health \n" REST;
}


//  Printers    {{ action }}

void    ClapTrap::printRepair(unsigned int n)
{
    std::cout
        << "ClapTrap " << ITAL << m_name << REST 
        << GREEN " gets repaired and gains " << n << " health \n" REST;
}

void    ClapTrap::printDamage(unsigned int n)
{
    std::cout
        << "ClapTrap " << ITAL << m_name << REST
        << MAG " gets hit, losing "
        << n << " points of health! \n" REST;
}

void    ClapTrap::printAttack(const std::string & other_name)
{
    std::cout
        << "ClapTrap " << ITAL << m_name << REST
        << YELL " attacks " REST << other_name << ", "
        << YELL "causing " << m_attackDamage << " points of damage! \n" REST;
}