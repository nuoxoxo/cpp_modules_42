#include "_Cpp05_.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

int	main()
{
	int	count = 0;
	
	{
		Bureaucrat	jim("Jim", 21);
		Bureaucrat	ron("Ron", 43);
		AForm		bail("form", 42, 12);

		std::cout << jim << ron << nl << bail;
		jim.signAForm(bail);
		ron.signAForm(bail);
	}
	
	print_ending(++count, "one can the other cannot");

	{
		Bureaucrat	*alex = new Bureaucrat();
		AForm		paper("form", 149, 149);

		std::cout << alex << nl << paper;
		try {
			alex->signAForm(paper);
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
			alex->signAForm(paper);
		} catch (std::exception & e) {
			std::cerr << e.what () << nl;
		}

		delete alex;

	}
	
	print_ending(++count, "capable after promotion ");

	{
		try 
		{
			AForm	a("A", 0, 10);
			
			std::cout << a << nl;
		}
		catch (std::exception & e)
		{
			std::cerr << e.what ();
		}
		
		try {
			AForm	b("B", 151, 10);
		
			std::cout << b << nl;
		
		} catch (std::exception & e) {
			std::cerr << e.what ();
		}
		
		try {
			AForm	c("C", 10, 0);
			std::cout << c << nl;
		} catch (std::exception & e) {
			std::cerr << e.what ();
		}
		
		try {
			AForm	d("D", 10, 151);
			std::cout << d << nl;
		} catch (std::exception & e) {
			std::cerr << e.what () << nl; 
		}
		
		try {
			AForm	valid("V", 1, 150);
			std::cout << valid << nl;
		} catch (std::exception & e) {
			std::cerr << e.what ();
		}
		
		// std::cout << valid << nl; // (?) out of scope
	}
	
	print_ending(++count, "cerr . invalid form");
	
}
