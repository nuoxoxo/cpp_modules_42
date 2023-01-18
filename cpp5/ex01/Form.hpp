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

#ifndef FORM_HPP
# define FORM_HPP

# include "_Cpp05_.hpp"
# include "Bureaucrat.hpp"

class	Bureaucrat; // added

class	Form
{

private:

	const std::string	m_name;
	const int		m_gradeRequiredSign;
	const int		m_gradeRequiredExec;
	bool			m_isSigned;

public:

	Form();
	Form(str::string, int)

}

#endif
