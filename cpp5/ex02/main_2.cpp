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
#include "ShrubberyCreationForm.hpp"

int	main()
{
	int	count = 0;
	
	{
		AForm		*form = new ShrubberyCreationForm("tree form");
		Bureaucrat	*glen = new Bureaucrat("Glen", G_SCEXEC);

		std::cout << form << glen;
		
		glen->signForm( *form );
		glen->executeForm( *form );
		
		delete form;
		delete glen;
	}	
	print_ending(++count, "just print the ascii tree!");
}
