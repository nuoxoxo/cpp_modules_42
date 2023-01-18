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

/*
const std::string	m_name;
const int		m_gradeRequiredSign;
const int		m_gradeRequiredExec;
bool			m_isSigned;
*/

# include "Form.hpp"

// orthodox canon

// draft
/*Doc::Doc()
:
m_name("(some form)"), m_isSigned(false),
m_gradeRqdToSign(150), m_gradeRqdToExec(150) {} */

Form::Form()
:
m_name("(some form)"),
m_isSigned(false),
m_gradeRequiredSign(150),
m_gradeRequiredExec(150) {}

Form::Form(Form const & dummy)
:
m_name(dummy.m_name),
m_isSigned(dummy.isSigned),
m_gradeRequiredSign(dummy.gradeRequiredSign),
m_gradeRequiredExec(dummy.gradeRequiredExec) {}

// draft
/*Bureaucrat & Bureaucrat::operator = (Bureaucrat const & dummy ) {
	m_grade = dummy.m_grade;
	return (*this);
}*/

Form & Form::operator = (Form const & dummy)
{
    (std::string &) m_name = rhs.m_name;
    (unsigned int &) m_gradeforSigner = rhs.m_gradeforSigner;
    (unsigned int &) m_gradeforExec = rhs.m_gradeforExec;
    return (*this);
}

Form::~Form() {}

// overloading the constructor

Form::Form(std::string name, unsigned int _sign_, unsigned int _exec_) :
: 
m_name(name), m_isSigned(false), 
m_gradeRequiredSign(_sign_), m_gradeRequiredExec(_exec_)
{
	if (_sign_ > G_LOW || _exec_ > G_LOW)
	{
		throw (GradeTooLowException());
	}
	if (_sign_ < G_HIGH || _exec_ < G_HIGH)
	{
		throw (GradaTooHighException());
	}
}



/*
const std::string &	getName() const;
unsigned int		getGradeRequiredSign() const;
unsigned int		getGradeRequiredExec() const;
bool			getIsSigned() const;
void			beSigned(const Bureaucrat &);

std::ostream & operator << ( std::ostream &, Form const &);
std::ostream & operator << ( std::ostream &, Form const *);
*/



// exceptions

/*
class	GradeTooHighException : public std::exception {
	const char* what() const throw();
};

class	GradeTooLowException : public std::exception {
	const char* what() const throw();
};
*/
