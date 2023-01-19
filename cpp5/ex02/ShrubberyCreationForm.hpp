/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   {}.hpp                                             :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: 2023/01/16 14:31:58 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "_Cpp05_.hpp"
# include "AForm.hpp"

# define G_SCSIGN 72
# define G_SCEXEC 45

class	ShrubberyCreationForm : public AForm
{

private:

	ShrubberyCreationForm();
	const std::string	m_target; // subject not clear: "target of form"
	
public:

	// canon
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm & operator = (ShrubberyCreationForm const & );

	// method
	void	execute(Bureaucrat const &) const;

};


std::ostream & operator << ( std::ostream &, AForm const &);
std::ostream & operator << ( std::ostream &, AForm const *);


#endif
