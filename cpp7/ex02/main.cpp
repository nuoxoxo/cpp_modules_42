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
/*                                                                            */
/*                                   Array                                    */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* *********************  ʕ • ᴥ•ʔ  mode: todo  (⊙. ⊙ )  ********************* */

#include "Array.hpp"
#define MAX 4294967295

#define LOWKEY	"\033[0;2m"
#define GREEN	"\033[0;32m"
#define RESET	"\033[0;0m"

int	main()
{
	int	i = -1;

	std::cout << GREEN "\nTest :: " << ++i << "\n\n" RESET;
	{
		Array<int>	arr(2);

		arr.printer();
		std::cout << arr << std::endl;
	}
	std::cout << GREEN "\nTest :: " << ++i << "\n\n" RESET;
	{
	}
	std::cout << GREEN "Test :: " << ++i << "\n\n" RESET;
	{
	}
	std::cout << GREEN "Test :: " << ++i << "\n\n" RESET;
	{
	}
	std::cout << GREEN "Test :: " << ++i << "\n\n" RESET;
	{
	}
}

