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

#include "iostream"

int	main(int c, char **v)
{
	int		i;
	int		j;

	if (c < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	i = 0;
	while (++i < c)
	{
		std::string	s(v[i]);

		j = -1;
		while (++j < (int) s.length())
		{
			std::cout << (char) std::toupper(s[j]);
		}
	}
	std::cout << std::endl;
	return (0);
}
