/* ************************************************************************** */
/*                                                                            */
/*                            \\             /`/``                            */
/*                            ~\o o_       0 0\                               */
/*                            / \__)      (u  ); _  _                         */
/*                     / \/ \/  /           \  \/ \/ \                        */
/*                    /(   . . )            (         )\                      */
/*                   /  \_____/              \_______/  \                     */
/*                       []  []               [[] [[]    *.                   */
/*                       []] []]              [[] [[]                         */
/*                                                                            */
/* ****************************************************************** nxu *** */

#include "phonebook.hpp"

static void	to_lower(char &);

int	main()
{
	std::string	usage;
	std::string	input;
	std::string	nocom;
	std::string	tocut;
	std::string	pbook;
	int		err;
	Phonebook	P;

	tocut = "\n ----------------8<-------------[ cut here ]------------------ \n";
	usage = "> [Usage]: Enter your command [Add, Search, Exit]";
	nocom = "Service unavailable. Please re-enter your command \n";
	pbook = "> Your awesome phonebook is online. \n";
	std::cout << tocut << nl2 << pbook << usage << arr;
	err = -1;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		std::for_each(input.begin(), input.end(), & to_lower);
		if (input == "add")
		{
			P.add();
			std::cout << "Contact added successfully! \n";

		}
		else if (input == "search")
		{
			P.search();
		}
		else if (input == "exit" || input == "exit()" || input == "quit")
		{
			std::cout << "> \n> All contacts will be lost forever. \n";
			std::cout << "> Goodbye and have a nice day." << arr;
			break ;
		}
		else
		{
			if (!++err)
				std::cout << nocom;
			else
				std::cout << "Please try harder! \n";
		}
	}
}

static void	to_lower(char &c)
{
	c = std::tolower(c);
}
