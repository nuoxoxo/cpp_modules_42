/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By:  nuxu <marvin@42.fr>                       ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nuxu              ...    :::             */
/*   Updated: ____/__/__ __:__:__ by nuxu             ...   ::::::::.fi       */
/*                                                                            */
/* ****************************************************************** nxu *** */

#include "Contact.hpp"

void	parse_input(std::string &);

Contact::Contact() {}
Contact::~Contact() {}

std::string get_input(std::string const msg)
{
    std::string input;

    while (input.empty())
	{
        if (std::cin.eof())
			exit(1);
		std::cout << msg << "\n➜➜ ";
		getline(std::cin, input);
		parse_input(input);
		if (input == "")
			continue ;
	}
    // std::cout << "in get_input: " << input << std::endl; // show
    return (input);
}

int Contact::add()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string secret;

    while (first_name == "")
        first_name = get_input("Please enter your first name:");
    // first_name = get_input("Please enter your first name:");
    // if (first_name.empty())
    //     return (0);

    while (last_name == "")
        last_name = get_input("Please enter your last name:");
    // last_name = get_input("Please enter your last name:");
    // if (last_name.empty())
    //     return (0);
    
    while (nickname == "")
        nickname = get_input("Please enter your nickname:");
    // nickname = get_input("Please enter your nickname:");
    // if (nickname.empty())
    //     return (0);
    
    while (phone_number == "" || !phone_number_is_numeric(phone_number))
        phone_number = get_input("Please enter your phone number:");
    
    while (secret == "")
    secret = get_input("Please enter your darkest secret:");
    // secret = get_input("Please enter your darkest secret:");
    // if (secret.empty())
    //     return (0);
    
    set_first_name(first_name);
    set_last_name(last_name);
    set_nickname(nickname);
    set_phone(phone_number);
    set_secret(secret);
    return (1);
}

void	parse_input(std::string & s)
{
	if (s == "")
		return ;
	std::string charset = " \t\v\r\n";
    std::size_t start = s.find_first_not_of(charset);
    std::size_t end = s.find_last_not_of(charset);
	// std::cout << '\'' << s << '\'' << s.length() << std::endl;
    s = start == end ? std::string(1, s[start]) : s.substr(start, end - start + 1);
	// std::cout << '\'' << s << '\'' << s.length() << std::endl;
}

bool Contact::phone_number_is_numeric(std::string & s)
{
    return s.find_first_not_of("0123456789") == std::string::npos;
}