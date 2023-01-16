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

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "iostream"
# include "string"

# define HI 150
# define LO 1

class	Bureaucrat
{

private:

	const std::string	m_name;
	int			m_grade;


public:
	
	// canon
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string, int);
	Bureaucrat( Bureaucrat const & );
	Bureaucrat & operator = (Bureaucrat const & );


public:

	// getter
	std::string const &	getName() const;
	int			getGrade() const;

	// methods
	void			gradeUp();
	void			gradeDown();

};


std::ostream & operator << (std::ostream &, Bureaucrat const & );


#endif
