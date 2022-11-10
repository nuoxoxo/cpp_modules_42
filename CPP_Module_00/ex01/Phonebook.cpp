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

Phonebook::Phonebook() : m_size() { m_contact = new Contact[CONTACT_SIZE]; }
Phonebook::~Phonebook() {}

/*
	Notes:
		"init list" is used to set the value of m_size, which is set for
		the first time.
*/

void	Phonebook::add()
{
	Contact		c;

	// get_input(Contact::first, c);
	// get_input(Contact::last, c);
	// get_input(Contact::nick, c);
	// get_input(Contact::phone, c);
	// get_input(Contact::dark, c);
	Phonebook::get_input(Contact::first, c);
	Phonebook::get_input(Contact::last, c);
	Phonebook::get_input(Contact::nick, c);
	Phonebook::get_input(Contact::phone, c);
	Phonebook::get_input(Contact::dark, c);
	m_contact[m_size % CONTACT_SIZE] = c;
	m_size += 1;
}

std::string	Phonebook::linter(const std::string & line) const
{
	if (line.length() < 11)
	{
		return (line);
	}
	return (line.substr(0, 9).append("."));
}

void	Phonebook::print_col(const Fmt & fmt, std::size_t i) const
{
	std::cout << std::setw(WIDTH) << i + 1 << '|';
	std::cout << std::setw(WIDTH) << std::right << fmt.get_firstname() << '|';
	std::cout << std::setw(WIDTH) << std::right << fmt.get_lastname() << '|';
	std::cout << std::setw(WIDTH) << std::right << fmt.get_nickname() << '|';
}

void	Phonebook::get_input(int i, Contact & c)
{
	// std::cout << Contact::field[i] << "\n  ➜ ";
	// getline(std::cin, c.info[i]);
	std::string		input;
	
	while (input.empty())
	{
		std::cout << Contact::field[i] << "\n  ➜ ";
		getline(std::cin, input);
	}
	c.info[i] = input;
}

bool	Phonebook::is_empty() const
{
	return (Phonebook::m_size == 0);
}

void	Phonebook::print_all() const
{
	std::string	first, last, nick;
	std::size_t	i;

	std::cout << std::setw(WIDTH + 5 + FMT_HEAD_SIZE) << FMT_HEAD;
	std::cout << std::setw(WIDTH + 5) << "\n\n";
	i = -1;
	while (++i < CONTACT_SIZE)
	{
		// first = linter(m_contact[i].info[0]);
		// last = linter(m_contact[i].info[1]);
		// nick = linter(m_contact[i].info[2]);
		first = Phonebook::linter(m_contact[i].info[0]);
		last = Phonebook::linter(m_contact[i].info[1]);
		nick = Phonebook::linter(m_contact[i].info[2]);


		Fmt			Fmt(first, last, nick);

		// print_col(Fmt, i);
		Phonebook::print_col(Fmt, i);
		std::cout << "\n-----------\n";
	}
}

void	Phonebook::search()
{
	int		i;

	if (is_empty())
	{
		std::cout << "The phonebook is empty. \n";
		return ;
	}
	print_all();
	std::cout << "Enter a number associated with your desire. \n";
	std::cout << "Press 0 to return\n ➜ ";
	std::cin >> i;
	std::cin.clear();
	if (!i)
	{
		return ;
	}
	if (i < 0)
	{
		std::cout << "Contact index cannot be less than zero. \n";
		std::cin.ignore(256, '\n');
		return ;
	}
	if (i)
	{
		i = (i - 1) % CONTACT_SIZE;
	}
	m_fmt.fmt_printer(m_contact[i]);
	std::cin.ignore(256, '\n');
}
