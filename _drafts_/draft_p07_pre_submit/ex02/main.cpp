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
#define MAX 1024
#define LOWKEY "\033[0;2m"
#define GREEN "\033[0;32m"
#define RESET "\033[0;0m"
#define nl "\n"
#define nl2 "\n\n"

int	main()
{
	int	i = -1;

	std::cout << GREEN "Test :: " << ++i << " :: default init(0) \n\n" RESET;
	{
		Array<int>	arr(2);

		arr.printer();
		std::cout << arr << std::endl;
	}
	std::cout << GREEN "Test :: " << ++i << " :: sequence filled \n\n" RESET;
	{
		Array<int>	arr(3);
		int		i = 3;

		while (--i > -1)
			arr[2 - i] = i;
		arr.printer();
		std::cout << arr << std::endl;
	}
	std::cout << GREEN "Test :: " << ++i << " :: out-of-bound index \n\n" RESET;
	{
		Array<int>	arr(3);
		int		i = 3;

		while (--i > -1)
			arr[2 - i] = i;
		try {
			std::cout << arr[10] << std::endl;
		} catch (const std::exception & e) {
			std::cerr << e.what() << nl;
		}
		
		try {
			std::cout << arr[4] << std::endl;
		} catch (const std::exception & e) {
			std::cerr << e.what() << nl;
		}
		
		std::cout << nl;
	}
	std::cout << GREEN "Test :: " << ++i << " :: negative index \n\n" RESET;
	{
		Array<int>	arr(3);
		int		i = 3;

		while (--i > -1)
			arr[2 - i] = i;
		try {
			std::cout << arr[-1] << std::endl;
		} catch (const std::exception & e) {
			std::cerr << e.what() << nl2;
		}
	}
	std::cout << GREEN "Test :: " << ++i << " :: cout const int [] \n\n" RESET;
	{
		Array<int>	arr(9);
		int		i = 9;

		while (--i > -1)
			arr[8 - i] = i;

		Array<int> const const_arr(arr);

		std::cout << "array :\n" << arr << nl;
		std::cout << "const copy:\n" << const_arr << nl;
	}
	std::cout << GREEN "Test :: " << ++i << " :: copy not affected \n\n" RESET;
	{
		Array<int>	arr(9);
		int		i = 9;

		while (--i > -1)
			arr[8 - i] = i;

		Array<int> const const_arr(arr);

		i = 9;
		while (--i > -1)
			arr[8 - i] *= 10;

		std::cout << "array :\n" << arr << nl;
		std::cout << "const copy:\n" << const_arr << nl;

	}
	std::cout << GREEN "Test :: " << ++i << " :: size / length \n\n" RESET;
	{
		{
			Array<int>	arr(MAX);

			std::cout << "size:\t" << arr.size() << nl;
			std::cout << "length:\t" << arr.length() << nl2;
		}
		{
			Array<int>	arr(MAX * 64);

			std::cout << "size:\t" << arr.size() << nl;
			std::cout << "length:\t" << arr.length() << nl2;
		}
	}
	std::cout << GREEN "- Use valgrind -\n\n" RESET;
}
