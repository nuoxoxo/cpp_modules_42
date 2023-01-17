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
			Bureaucrat jeffe("Jeffe", -1);	
			std::cout << jeffe;
		} catch (std::exception & e) {
			std::cout << e.what();
		}
	}
	print_ending(++count, "grade < 0");
	{
		try {
			Bureaucrat jeffe("Jeffe", 1);	
			std::cout << jeffe;
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		try {
			Bureaucrat jeffe("Jeffe", 1);	
			jeffe.gradeDown();
			std::cout << jeffe;
		} catch (std::exception & e) {
			std::cout << e.what();
		}
	}
	print_ending(++count, "decrement");
	{
		try {
			Bureaucrat jorge("Jorge", 150);
			std::cout << jorge;
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		try {
			Bureaucrat jorge("Jorge", 149);
			std::cout << jorge;
			jorge.gradeUp();
			std::cout << jorge;
			jorge.gradeUp();
			std::cout << jorge;
		} catch (std::exception & e) {
			std::cout << e.what();
		}
	}
	print_ending(++count, "increment");
	{
		try {
			Bureaucrat jorge_("Jorge", 150);
			Bureaucrat jorge(jorge_);
			std::cout << jorge;;
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		try {
			Bureaucrat jorge_("Jorge", 149);	
			Bureaucrat jorge(jorge_);
			std::cout << jorge;
			jorge.gradeUp();
			std::cout << jorge;
			jorge.gradeUp();
			std::cout << jorge;
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		// std::cout << jorge_; // impossible
		// std::cout << jorge; // impossible
	}
	print_ending(++count, "idem + copy constr");
	{
		try {
			Bureaucrat rojas("Rojas", 5);
		}
	}
}
