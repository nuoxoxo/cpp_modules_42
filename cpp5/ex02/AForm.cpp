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


# include "AForm.hpp"


/* orthodox canon */

// default
AForm::AForm() : m_name("(some form)"),
	m_gradeRequiredSign(G_LOW),
	m_gradeRequiredExec(G_LOW) {}

AForm::~AForm() {}


/// default copy constr
AForm::AForm(AForm const & dummy) : m_name(dummy.m_name),
	m_gradeRequiredSign(dummy.m_gradeRequiredSign),
	m_gradeRequiredExec(dummy.m_gradeRequiredExec)
{
	*this = dummy;
}


// = operatr
AForm & AForm::operator = (AForm const & dummy)
{
    (bool &) m_isSigned = dummy.m_isSigned;

    // {!} constant, thus not to copy the following
    // 
    // (unsigned int &) m_gradeforSigner = dummy.m_gradeforSigner;
    // (unsigned int &) m_gradeforExec = dummy.m_gradeforExec;
    
    return (*this);
}


// constructor overloaded
AForm::AForm(std::string name, unsigned int _sign_, unsigned int _exec_) :
	m_name(name),
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
std::ostream & operator << (std::ostream & ostream, AForm const & form)
{
	ostream
	<< "AForm: " GREEN << form.getName() << RESET nl
	<< "Stat: "
	<< (form.getIsSigned() ? GREEN "signed" : RED "not signed")
	<< RESET nl
	///*
	<< "min to sign: " CYAN << form.getGradeRequiredSign() << RESET nl
	<< "min to exec: " CYAN << form.getGradeRequiredExec() << RESET nl2;
	//*/
	return (ostream);
}

std::ostream & operator << (std::ostream & ostream, AForm const * form)
{
	ostream
	<< "AForm: " GREEN << form->getName() << RESET nl
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
void	AForm::beSigned(const Bureaucrat & mec)
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
const char * AForm::GradeTooLowException::what() const throw()
{
	return (CYAN "Error: Grade too low. \n" RESET);
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return (YELL "Error: Grade too high. \n" RESET)
	;
}


// getter
/*
const std::string &	getName() const;
unsigned int		getGradeRequiredSign() const;
unsigned int		getGradeRequiredExec() const;
bool			getIsSigned() const; */

const std::string & AForm::getName() const
{
	return (m_name);
}


unsigned int	AForm::getGradeRequiredSign() const
{
	return (m_gradeRequiredSign);
}

unsigned int	AForm::getGradeRequiredExec() const
{
	return (m_gradeRequiredExec);
}

bool	AForm::getIsSigned() const
{
	return m_isSigned;
}




