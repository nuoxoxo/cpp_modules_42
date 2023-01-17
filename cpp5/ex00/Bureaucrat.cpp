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

#include "_Cpp05_.hpp"
#include "Bureaucrat.hpp"

// canon

Bureaucrat::Bureaucrat() : m_name("(some bureaucrat)"), m_grade(150) {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat & dummy) : m_name(dummy.m_name)
{
	*this = dummy;
}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & dummy )
{
	m_grade = dummy.m_grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string s, int G) : m_name(s), m_grade(G)
{
	if (m_grade < G_LOW)
	{
		throw ( GradeTooLowException() );
	}
	else if (m_grade > G_HIGH)
	{
		throw ( GradeTooHighException() );
	}
}


// overloading the `<<`

std::ostream & operator << (std::ostream & ostream, Bureaucrat const & person)
{
	ostream
	<< person.getName() <<  ", bureaucrat grade "
	<< person.getGrade() << nl;

	return (ostream);
}

std::ostream & operator << (std::ostream & ostream, Bureaucrat const * person)
{
	ostream
	<< person->getName() <<  ", bureaucrat grade "
	<< person->getGrade();
	return (ostream);
}

// getter

std::string const & Bureaucrat::getName() const
{
	return (m_name);
}

int	Bureaucrat::getGrade() const
{
	return (m_grade);
}


// method

void	Bureaucrat::gradeUp()
{
	if (++m_grade > G_HIGH)
	{
		throw( GradeTooHighException() );
	}
}

void	Bureaucrat::gradeDown()
{
	if (--m_grade < G_LOW)
	{
		throw( GradeTooLowException() );
	}
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade too low. \n");
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade too high. \n")
	;
}



