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

# include "PresidentialPardonForm.hpp"


// default
PresidentialPardonForm::PresidentialPardonForm() :
	AForm("(a piece of presidential pardon)", G_PPSIGN, G_PPEXEC),
	m_target("(a target)") {}

PresidentialPardonForm::~PresidentialPardonForm() {}


/// default copy constr
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & dummy) :
	AForm("(a piece of presidential pardon)", G_PPSIGN, G_PPEXEC),
	m_target(dummy.m_target)
{
	*this = dummy;
}


// = operatr
PresidentialPardonForm & PresidentialPardonForm::operator = (PresidentialPardonForm const & dummy)
{
	AForm::
	return (*this);
}


// constructor overloaded
PresidentialPardonForm::PresidentialPardonForm(std::string name, unsigned int _sign_, unsigned int _exec_) :
	m_name(name),
	m_isSigned(),
	m_gradeRequiredSign(_sign_),
	m_gradeRequiredExec(_exec_)
{
	if (_sign_ > G_LOW || _exec_ > G_LOW)
	{
		throw (GradeTooLowException());
	}

	if (_sign_ < G_HIGH || _exec_ < G_HIGH)
	{
		throw (GradeTooHighException());
	}
}


// ostream overloaded
std::ostream & operator << (std::ostream & ostream, PresidentialPardonForm const & form)
{
	ostream
	<< "PresidentialPardonForm: " GREEN << form.getName() << RESET nl
	<< "Stat: "
	<< (form.getIsSigned() ? GREEN "signed" : RED "not signed")
	<< RESET nl
	///*
	<< "min to sign: " CYAN << form.getGradeRequiredSign() << RESET nl
	<< "min to exec: " CYAN << form.getGradeRequiredExec() << RESET nl2;
	//*/
	return (ostream);
}

std::ostream & operator << (std::ostream & ostream, PresidentialPardonForm const * form)
{
	ostream
	<< "PresidentialPardonForm: " GREEN << form->getName() << RESET nl
	<< "Stat: "
	<< (form->getIsSigned() ? GREEN "signed" : RED "not signed")
	<< RESET nl
	///*
	<< "min to sign: " CYAN << form->getGradeRequiredSign() << RESET nl
	<< "min to exec: " CYAN << form->getGradeRequiredExec() << RESET;
	//*/
	return (ostream);
}


//	method

//	new arrival
void	PresidentialPardonForm::execute(Bureaucrat const & mec) const // new
{
	if (!m_isSigned)
	{
		throw FormUnsignedException();
	}
	
	if (m_gradeRequiredExec < mec.getGrade())
	{
		throw GradeTooLowException();
	}
}

void	PresidentialPardonForm::beSigned(const Bureaucrat & mec)
{
	if (mec.getGrade() > m_gradeRequiredSign)
	{
		throw (GradeTooLowException());
		return ;
	}
	m_isSigned = true;

	// (?) no comparison needed w/ gradeRequiredExec 
}


// exception
const char * PresidentialPardonForm::GradeTooLowException::what() const throw()
{
	return (CYAN "Error: Grade too low. \n" RESET);
}


const char * PresidentialPardonForm::GradeTooHighException::what() const throw()
{
	return (YELL "Error: Grade too high. \n" RESET)
	;
}


// getter


const	std::string & PresidentialPardonForm::getName() const {return (m_name);}


bool	PresidentialPardonForm::getIsSigned() const {return m_isSigned;}


unsigned int	PresidentialPardonForm::getGradeRequiredSign() const {
	return (m_gradeRequiredSign);
}


unsigned int	PresidentialPardonForm::getGradeRequiredExec() const {
	return (m_gradeRequiredExec);
}




