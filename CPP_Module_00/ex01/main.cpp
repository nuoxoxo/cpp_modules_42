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

static void	lowercase_str(std::string&);
static void	lowercase_char(char&) ;
static void parse_input(std::string&);

int main()
{
    std::string input;
    Phonebook P; 
    int index = 1;

    std::cout << DELIM << NL2 << ONAIR << USAGE << SKIP_PROMPT;
    while (!std::cin.eof())
    {
        std::cout << "➜ ";
        std::getline(std::cin, input);
        parse_input(input);
        if (input == "add")
        {
            Contact this_guy;
            index = index > PHONEBOOK_THICKNESS ? index : 1;
            if (! this_guy.add())
                break;
            P.append(index, this_guy);
            index++;
        }
        else if (input == "search")
        {
            if (! P.search(P))
                break;
        }
        else if (input == "exit")
        {
            std::cout << "➜ \n➜ All contacts will be lost forever. \n";
			std::cout << "➜ Goodbye and have a nice day." << SKIP_PROMPT;
			break ;
        }
        else
        {
            continue ;
        }
    }
    return (0);
}

//

static void	parse_input(std::string & s)
{
	if (s == "")
		return ;
    lowercase_str(s);
	std::string charset = " \t\v\r\n";
    std::size_t start = s.find_first_not_of(charset);
    std::size_t end = s.find_last_not_of(charset);

	// std::cout << '\'' << s << '\'' << s.length() << std::endl;
    
    s = start == end ? std::string(1, s[start]) : s.substr(start, end - start + 1);
	// std::cout << '\'' << s << '\'' << s.length() << std::endl;
}

static void	lowercase_str(std::string& s)
{
	int		i;

	i = -1;
	while (++i < (int) s.length())
	{
		lowercase_char(s[i]);
	}
}

static void	lowercase_char(char & c)
{
	c = std::tolower(c);
}