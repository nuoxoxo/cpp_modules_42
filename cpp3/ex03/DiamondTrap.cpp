/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: 2023/01/09 14:55:42 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"


std::string const DiamondTrap::m_trait = "(trait: DiamondTrap) ";

//  Default

DiamondTrap::DiamondTrap() : ClapTrap()
{
    this->m_hitPoints = 100; // scav
    this->m_energyPoints = 50; // scav
    this->m_attackDamage = 20; // scav

    std::cout << LOWKEY << m_trait << "constructor" << called REST;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << LOWKEY << m_trait << ITAL << m_name << REST LOWKEY << " destructor" << called REST;
}


//  Copy

DiamondTrap::DiamondTrap(DiamondTrap const & other)
{
    *this = other;

    std::cout << LOWKEY << m_trait << "Copy constructor" << called REST;
}


// Copy assignment =

DiamondTrap & DiamondTrap::operator = (DiamondTrap const & other)
{
    std::cout << LOWKEY << m_trait << "Copy assignment operator" << called REST;
    
    if (this == & other)
        return *this;
    
    this->m_name = other.m_name;
    this->m_hitPoints = other.m_hitPoints;
    this->m_energyPoints = other.m_energyPoints;
    this->m_attackDamage = other.m_attackDamage;

    return (*this);
}


//  Constructor overload

DiamondTrap::DiamondTrap(std::string name) : ClapTrap (name) // NEW (specs) in ex01 
{
    this->m_hitPoints = 100; // scav
    this->m_energyPoints = 50; // scav
    this->m_attackDamage = 20; // scav

    std::cout
        << LOWKEY << m_trait << ITAL << m_name << REST
        << LOWKEY " constructor" << called REST;
}


//  Game

void    DiamondTrap::guardGate(void) // NEW in ex01
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
    std::cout
        << m_trait << ITAL << m_name << REST
        << CYAN " is assigned this role: " REST ITAL "Gate Guardian " REST nl;
}

/*
void    DiamondTrap::attack(const std::string & other_name)
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

void    DiamondTrap::takeDamage(unsigned int num)
{ 
    printDamage(num);

    this->m_hitPoints -= num;
    
    if (this->m_hitPoints < 1)
        std::cout << NOATTACK;
    else
        printCurrentHitPts();
}

void    DiamondTrap::beRepaired(unsigned int num)
{
    this->m_hitPoints += num;
    this->m_energyPoints += num - 1;

    printRepair(num);
    printCurrentHitPts();
    printCurrentEnergyPts();

}
*/


//  Getter {{ obsolete }}

/*
std::string DiamondTrap::getName() const
{
    return (this->m_name);
}

int DiamondTrap::getDama() const
{
    return (this->m_attackDamage);
}
*/

//  Printers    {{ state }}

/*
void    DiamondTrap::printCurrentHitPts()
{
    std::cout
        << "DiamondTrap " << ITAL << m_name << REST
        << CYAN " currently has " << m_hitPoints << " hit points \n" REST;
}

void    DiamondTrap::printCurrentEnergyPts()
{
    std::cout
        << "DiamondTrap " << ITAL << m_name << REST
        << CYAN " currently has " << m_energyPoints << " health \n" REST;
}
*/


//  Printers    {{ action }}

/*
void    DiamondTrap::printRepair(unsigned int n)
{
    std::cout
        << "DiamondTrap " << ITAL << m_name << REST GREEN " gets repaired, gains "
        << n - 1 << " health and " << n << " hit points \n" REST;
}

void    DiamondTrap::printDamage(unsigned int n)
{
    std::cout
        << "DiamondTrap " << ITAL << m_name << REST
        << MAG " gets hit, losing "
        << n << " points of health! \n" REST;
}

void    DiamondTrap::printAttack(const std::string & other_name)
{
    std::cout
        << "DiamondTrap " << ITAL << m_name << REST
        << YELL " attacks " REST ITAL << other_name << REST ", "
        << YELL "causing " << m_attackDamage << " points of damage! \n" REST;
}
*/