/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   {}.cpp                                             :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: 2023/01/09 14:55:26 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define B_SIZE 100

# include "iostream"
# include "string"
# include "unistd.h" // usleep

class	Brain
{

private:
	std::string	m_idea[B_SIZE];

public:
	// canon
	Brain();
	Brain(const Brain &);
	Brain & operator = (const Brain &);
	~Brain();

	// getter
	std::string	* getIdea() const;
	std::string	& getIdea(int) const;
	void		setIdea(int, std::string);

};

//	colors

# define ITAL	"\033[3m"

# define LOWKEY	"\033[0;2m"
# define WHITE	"\033[1;37m"
# define CYAN	"\033[0;36m"
# define YELL	"\033[0;33m"
# define GREEN	"\033[0;32m"
# define RED	"\033[0;31m"
# define MAG	"\033[0;35m"

# define REST	"\033[0;0m"


//	formatting

# define called " called\n"
# define inside "\ninside "
# define nl2 " \n\n"
# define nl " \n"


#endif
