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
/*   ************************************************************************** */

#include "_Cpp05_.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	int	count = 0;
	
	{
		// AForm		*r1 = new RobotomyRequestForm("robo.1");
		AForm		*p1 = new PresidentialPardonForm("pard.1");
		Bureaucrat	*bh = new Bureaucrat("Brigitte Fontaine", G_PPEXEC);

		bh->signForm(*p1);
		bh->executeForm(*p1);
	}
	
	print_ending(++count, "1st test");
	
}
