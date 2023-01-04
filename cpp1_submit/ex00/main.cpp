/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   _                                                  ...      :::    :::   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nxu              ...   ::::::::.fi       */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* *********************  ʕ • ᴥ•ʔ  mode: todo  (⊙. ⊙ )  ********************* */

#include "Zombie.hpp"
/*
static void	storyline_1(void);
static void	storyline_2(void);
static void	storyline_3(void);
static void	storyline_4(void);
*/
int	main()
{
	Zombie	matt("Matthew");
	Zombie	*luke = newZombie("Luke");

	storyline_1();
	
	matt.announce();

	// ------8<------

	storyline_2();
	
	luke->announce();

	// ------8<------

	storyline_3();
	
	randomChump("Paul");

	// ------8<------

	storyline_4();
	
	delete	luke;
}

//

