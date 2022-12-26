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

#include "iostream"
#include "string"
#include "Phonebook.hpp"

Phonebook::Phonebook() : m_size() {}
Phonebook::~Phonebook() {}

bool	Phonebook::is_empty() const
{
	return (!Phonebook::m_size);
}

int Phonebook::empty(int index){
    return (this->m_contacts[index].get_first_name() == "");
}

void Phonebook::append(int index, Contact this_guy){
    (void) index;
    // this->m_contacts[index] = this_guy;
    this->m_contacts[m_size % PHONEBOOK_THICKNESS] = this_guy;
    ++m_size;
}

std::string Phonebook::linter(std::string s)
{
    if ((int) s.length() < 11)
        return (s);
    return (s.substr(0, 9) + '.');
}

void Phonebook::print_all(void)
{
	if (is_empty())
    	return ;
    int i = -1;
    std::cout << FRAME << HEAD << FRAME;
    while (++i < PHONEBOOK_THICKNESS)
    {
        if (this->m_contacts[i].get_first_name() == "") 
			break ;
        std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10)
            << linter(this->m_contacts[i].get_first_name()) << "|" << std::setw(10)
            << linter(this->m_contacts[i].get_last_name()) << "|" << std::setw(10)
            << linter(this->m_contacts[i].get_nickname()) << "| \n" << FRAME;
    }
    return;
}

void Phonebook::print_col(int index){
    if (index > 7 || this->m_contacts[index].get_first_name() == "")
        return ;
    std::cout << "First name: " << this->m_contacts[index].get_first_name() << std::endl;
    std::cout << "Last name: " << this->m_contacts[index].get_last_name() << std::endl;
    std::cout << "Nick name: " << this->m_contacts[index].get_nickname() << std::endl;
    std::cout << "Phone number: " << this->m_contacts[index].get_phone() << std::endl;
    std::cout << "Darkest secret: " << this->m_contacts[index].get_secret() << std::endl;
}

bool isnumeric(const std::string & s)
{
    return s.find_first_not_of("0123456789") == std::string::npos;
}

int	Phonebook::search(Phonebook P)
{
    int index = -1;
    std::string input;

    if (P.empty(0))
    {
        std::cout << "The Phonebook is empty.\n";
        return (1);
    }
    P.print_all();
    std::cout << "Enter a number associated with your desire. \n";
    std::cout << "Press 0 to return\n ➜ ";
    std::cin >> input;
    if (std::cin.eof())
        return (0);
    if (input.empty() || !isnumeric(input))
    {
        std::cout << "Numeric value needed. \n";
        return (std::cin.ignore(256, '\n'), 1);
    }
    index = atoi(input.c_str()) - 1;
    if (-1 == index)
        return (std::cin.ignore(256, '\n'), 1);
    if (index < 0 || index > 7)
        std::cout << "Reasonable range needed. \n";
    else if (P.empty(index))
        std::cout << "Contact " << index+1 << " not found. Try harder please. \n";
    else
        P.print_col(index);
    std::cin.ignore(256, '\n');
    return (1);
}

void	Phonebook::parse_input(std::string & s)
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