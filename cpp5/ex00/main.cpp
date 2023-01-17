#include "_Cpp05_.hpp"
#include "Bureaucrat.hpp"

int	main()
{
	int	count = 0;
	
	{
		// % nofunc()
		// % try (nofunc()) catch(error) {console.log('here')}
		// % try (nofunc()) catch(e) {console.log(e)}
		// % try:\ print(iota) except print(':-D')
	}
	{
		Bureaucrat	*anonymous = new Bureaucrat();

		std::cout << anonymous;

		try
		{
			anonymous->gradeDown();
		}
		catch (std::exception & e)
		{
			std::cout << e.what();
		}

		delete anonymous;
	}
	print_ending(++count);
	{
		try {
			Bureaucrat	jeffe("Jeffe", -1);
			
			std::cout << jeffe;
		} catch (std::exception & e) {
			std::cout << e.what();
		}		
	}
}
