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
#include "ScavTrap.hpp"

static void     print_ending(void) {std::cout << LOWKEY nl "(...end test)" nl2 REST;};

int main(void)
{
    {
        
        ScavTrap    wham("Wham!"); // ClapTrap    wham("Wham!");
        
        wham.attack("Kraftwerk");
        wham.takeDamage(1);
        wham.beRepaired(3);
        wham.guardGate();

    }
    print_ending();
    
    // {
    //     ClapTrap    c("some bot");
    //     ClapTrap    cc = c;
        
    //     c.attack("The Angel");
    //     c.takeDamage(4);
    //     c.beRepaired(2);
    //     cc.attack("The Entity");
    //     cc.takeDamage(3);
    //     cc.beRepaired(1);
    // }
    // print_ending();

    // {
    //     ClapTrap    s("Seele");
    //     ClapTrap    ss(s);
        
    //     s.attack("Lilin");
    //     s.takeDamage(4);
    //     s.beRepaired(2);
    //     ss.attack("Adam");
    //     ss.takeDamage(3);
    //     ss.beRepaired(1);
    // }
    // print_ending();

    // {
    //     ClapTrap().attack("them");
    //     // ClapTrap().takeDamage(99);
    //     // ClapTrap().beRepaired(99);
    // }
    // print_ending();

}