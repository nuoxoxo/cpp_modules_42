#include "_Cpp05_.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main()
{
	int	count = 0;
	
	{
		Bureaucrat	jim("Jim", 21);
		Bureaucrat	ron("Ron", 43);
		Form		bail("form", 42, 12);

		std::cout << jim << ron << nl << bail;
		jim.signForm(bail);
		ron.signForm(bail);

		std::cout << bail;
	}
	
	print_ending(++count, "one can the other cannot");

	{
		Bureaucrat	*alex = new Bureaucrat();
		Form		paper("form", 149, 149);

		std::cout << alex << nl << paper;
		try {
			alex->signForm(paper);
		} catch (std::exception & e) {
			std::cerr << e.what () << nl;
		}
		try {
			alex->gradeUp();
		} catch (std::exception & e) {
			std::cerr << e.what () << nl;
		}
		std::cout << alex << nl << paper;
		try {
			alex->signForm(paper);
		} catch (std::exception & e) {
			std::cerr << e.what () << nl;
		}

		std::cout << paper;
		delete alex;

	}
	
	print_ending(++count, "capable after promotion ");

	{
		try 
		{
			Form	a("A", 0, 10);
			
			std::cout << a << nl;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what ();
		}
		
		try {
			Form	b("B", 151, 10);
		
			std::cout << b << nl;
		
		} catch (std::exception & e) {
			std::cerr << e.what ();
		}
		
		try {
			Form	c("C", 10, 0);
			std::cout << c << nl;
		} catch (std::exception & e) {
			std::cerr << e.what ();
		}
		
		try {
			Form	d("D", 10, 151);
			std::cout << d << nl;
		} catch (std::exception & e) {
			std::cerr << e.what () << nl; 
		}
		
		try {
			Form	valid("V", 1, 150);
			std::cout << valid << nl;
		} catch (std::exception & e) {
			std::cerr << e.what ();
		}
	
		// std::cout << valid << nl; // (?) out of scope
	}
	
	print_ending(++count, "cerr . invalid form");
	
}
