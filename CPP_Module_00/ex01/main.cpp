/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   _                                                  ...      :::    :::   */
/*                                                    ... ...         :::     */
/*   By:  nuxu <marvin@42.fr>                       ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nuxu              ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nuxu             ...   ::::::::.fi       */
/*                                                                            */
/* ****************************************************************** nxu *** */

#include "Phonebook.hpp"

static void	to_lower(char &);

int	main()
{
	std::string		input;
	Phonebook		P;
	int				err;

	std::cout << DELIM << NL2 << ONAIR << USAGE << SKIP_PROMPT;
	err = -2;
	while (1)
	{
		std::cout << "➜ ";
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
		// else if (input == "exit" || input == "exit()" || input == "quit")
		else if (input == "exit")
		{
			std::cout << "➜ \n➜ All contacts will be lost forever. \n";
			std::cout << "➜ Goodbye and have a nice day." << SKIP_PROMPT;
			break ;
		}
		else
		{
			continue ;
			// if ( ! ++err)
			// 	std::cout << NOCMD;
			// else
			// 	std::cout << "Please try harder! \n";
		}
	}
}

static void	to_lower(char & c)
{
	c = std::tolower(c);
}
