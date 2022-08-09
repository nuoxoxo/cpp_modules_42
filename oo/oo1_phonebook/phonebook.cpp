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

Phonebook::Phonebook() : size()
{
	contact = new Contact[8];
}

Phonebook::~Phonebook() {}

void	Phonebook::add()
{
	Contact		c;

	get_input(Contact::firstname, c);
	get_input(Contact::lastname, c);
	get_input(Contact::nickname, c);
	get_input(Contact::phoneno, c);
	get_input(Contact::darksec, c);
	contact[size % 8] = c;
	last_added = (last_added + 1) % 8;
	size += 1;
	
}

std::string	Phonebook::linter(const std::string &line) const
{
	if (line.length() < 11)
	{
		return (line);
	}
	return (line.substr(0, 9).append("."));
}

void	Phonebook::put_columns(const Console &cs, std::size_t i) const
{
	std::cout << std::setw(10) << i + 1 << '|';
	std::cout << std::setw(10) << std::right << cs.get_firstname() << '|';
	std::cout << std::setw(10) << std::right << cs.get_lastname() << '|';
	std::cout << std::setw(10) << std::right << cs.get_nickname() << '|';
}

void	Phonebook::get_input(int i, Contact &c)
{
	std::cout << Contact::field[i] << "\n>> ";
	getline(std::cin, c.info[i]);
}

bool	Phonebook::is_empty() const
{
	return (size == 0);
}

void	Phonebook::put_table() const
{
	std::string	first, last, nick;
	std::size_t	i;

	/// header
	i = -1;
	while (++i < 8)
	{
		first = linter(contact[i].info[0]);
		last = linter(contact[i].info[1]);
		nick = linter(contact[i].info[2]);

		Console		console(first, last, nick);

		put_columns(console, i);
		std::cout << "\n-----------\n";
	}
}

void	Phonebook::search()
{
	int		i;

	if (is_empty())
	{
		std::cout << "There is nothing in this phonebook. \n";
		return ;
	}
	put_table();
	std::cout << "Enter a number associated with your desire. \n";
	std::cout << "Press 0 to return\n>> ";
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
		i = (i - 1) % 8;
	}
	console.display_info(contact[i]);
	std::cin.ignore(256, '\n');
}


