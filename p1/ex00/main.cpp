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

static void	storyline_1(void);
static void	storyline_2(void);
static void	storyline_3(void);
static void	storyline_4(void);

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

static void	storyline_1(void)
{
	std::cout << "\nStoryline (1)";
	std::cout << _YELLOW_ "\n[ Meet Matthew, the first ";
	std::cout << "man-made psychic-vampire of ";
	std::cout << "the new era. ]\n" _REST_ ;
	std::cout << _CYAN_ "[ Matthew is created on the ";
	std::cout << _RED_ "\"Stack\"" _REST_ ;
	std::cout << _CYAN_ " ]\n[ ie. built with ";
	std::cout << _RED_ _ITAL_"\"Zombie name(name)\"" _REST_ ;
	std::cout << _CYAN_ " ]\n\n" _REST_ ;

}

static void	storyline_2(void)
{
	std::cout << "\nStoryline (2)";
	std::cout << _YELLOW_ "\n[ Here's Luke. Luke is different... ]\n";
	std::cout << "[ While Matthew is a vampire, Luke is a ghost. ";
	std::cout << "...A real one. ]\n" _REST_ ;
	std::cout << _CYAN_ "[ Luke is created on the ";
	std::cout << _RED_ "\"Heap\"" _REST_ ;
	std::cout << _CYAN_ " ]\n[ ie. built by using the ";
	std::cout << _RED_ _ITAL_ "\"new\"" _REST_ ;
	std::cout << _CYAN_ " keyword ]\n\n" _REST_ ;
}

static void	storyline_3(void)
{
	std::cout << "\nStoryline (3)";
	std::cout << _YELLOW_ "\n[ Paul is born... ";
	std::cout << "and dies instantly. ]\n\n" _REST_;
}

static void	storyline_4(void)
{
	std::cout << "\nStoryline (4)";
	std::cout << _YELLOW_ "\n[ Let's kill Luke before we go. ]\n";
	std::cout << "[ Because he is the ";
	std::cout << _ITAL_ _RED_ "heap " _REST_ << _YELLOW_ "guy. ]\n";
	std::cout << "[ We didn't kill Matthew. ]\n\n" _REST_;
}
