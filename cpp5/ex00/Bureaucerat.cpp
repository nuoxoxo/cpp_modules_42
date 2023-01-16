/* ************************************************************************** */
/*                                                                            */
/*                                                        ...      :::::::    */
/*   {{}}.hpp                                           :+:      :+:    :+:   */
/*                                                    ... ...         :::     */
/*   By: nxu <marvin@42.fr>                         ...  ...       :::        */
/*                                                ...........   :::           */
/*   Created: ____/__/__ __:__:__ by nxu               ...    :::             */
/*   Updated: 2023/01/16 14:31:58 by nuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name("somebody"), m_grade(150) {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat & dummy) : m_name(dummy.m_name)
{
	*this = src;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & dummy )
{
	m_grade = dummy.m_grade;
	return *this;
}


