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

int main(void)
{
    {
        ClapTrap    wham("Wham!");
        
        wham.attack("some bot");
        wham.takeDamage(1);
        wham.beRepaired(3);
        wham.attack("another bot");
        wham.takeDamage(2);
        wham.beRepaired(4);
    }
    std::cout << nl;
    
    {
        ClapTrap    c("Chucky");
        ClapTrap    cc = c;
        
        c.attack("Lecter");
        c.takeDamage(4);
        c.beRepaired(2);
        cc.attack("The Entity");
        cc.takeDamage(3);
        cc.beRepaired(1);
    }
    std::cout << nl;

    {
        ClapTrap().attack("them");
        // ClapTrap().takeDamage(99);
        // ClapTrap().beRepaired(99);
    }
    std::cout << nl;
}