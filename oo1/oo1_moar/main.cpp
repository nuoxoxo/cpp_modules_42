/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   _                                                  ...      :::    :::   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nxu              ...   ::::::::.fi       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static void	storyline_1(void);
static void	storyline_2(void);
static void	storyline_3(void);
static void	storyline_4(void);

int	main()
{
	Zombie		*luke = newZombie("Luke");
	Zombie		matt("Matthew");

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
	std::cout << _yellow "\n[ Meet Matthew, the first ";
	std::cout << "man-made psychic-vampire of ";
	std::cout << "the new era. ]\n" _reset ;
	std::cout << _mag "[ Matthew is created on the ";
	std::cout << _red "\"Stack\"" _reset ;
	std::cout << _mag " ]\n[ ie. built with ";
	std::cout << _red _ital"\"Zombie name(name)\"" _reset ;
	std::cout << _mag " ]\n\n" _reset ;

}

static void	storyline_2(void)
{
	std::cout << _yellow "\n[ Here's Luke. Luke is different... ]\n";
	std::cout << "[ While Matthew is a vampire, Luke is a ghost. ";
	std::cout << "...A real one. ]\n" _reset ;
	std::cout << _mag "[ Luke is created on the ";
	std::cout << _red "\"Heap\"" _reset ;
	std::cout << _mag " ]\n[ ie. built by using the ";
	std::cout << _red _ital "\"new\"" _reset ;
	std::cout << _mag " keyword ]\n\n" _reset ;
}

static void	storyline_3(void)
{
	std::cout << _yellow "\n[ Paul is born... ";
	std::cout << "and dead almost instantly. ]\n\n" _reset;
}

static void	storyline_4(void)
{
	std::cout << _yellow "\n[ Before we go, let's ";
	std::cout << "KILL Luke. ]\n[ Just because he is the ";
	std::cout << _ital _red "heap " _reset << _yellow "guy. ]\n";
	std::cout << "[ ...But we didn't kill Matthew. ]\n\n" _reset;
}
