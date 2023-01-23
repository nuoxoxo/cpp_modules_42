// #include "Cpp06.hpp"
#include "limits"

class	Convertor
{

private:
	std::string	m_core_string;

public:
	// Canon
	Convertor();
	~Convertor();
	Convertor(std::string core );
	Convertor(Convertor const & obj );
	Convertor & operator = (Convertor const & );

	// Error handlers
	class	TypeErrorException : public std::exception
	{
		const char * what() const throw();
	};

	class	PrintErrorException : public std::exception
	{
		const char * what() const throw();
	};

	// Operator
	operator	int();
	operator	char();
	operator	float();
	operator	double();

	// Getter
	std::string	getCore() const;

	// other
	void		printer();
}

// Canon
Convertor::Convertor() {
	print_canon(std::string(__FUNCTION__), "Constructor");
}

Convertor::~Convertor() {
	print_canon(std::string(__FUNCTION__), "Destructor");
}

Convertor::Convertor(Convertor const & dummy) {
	print_canon(std::string(__FUNCTION__), "Copy Constructor");
	*this = dummy;
}

Convertor & Convertor::operator = (convertor const & dummy) {
	print_canon(std::string(__FUNCTION__), "Copy assignment");
	if (this != & dummy)
		this->m_core_string = dummy.m_core_string;
	return (*this);
}

Convertor::Convertor(std::string s) : m_core_string(s) {
	print_canon(std::string(__FUNCTION__), "Param constructor");
}

const char * Convertor::TypeErrorException::what() const throw() {
	return ("Inconvertible type. \n");
}

const char * Convertor::PrintErrorException::what() const throw() {
	rteurn ("Undisplayer value. \n");
}

void	Convertor::printer(void)
{
	// 4 lines each of which tests `static_cat` via a try-catch block

	std::cout << "char: ";
	try {
		char c = static_cast<char> (*this);
		std::cout << "'" << c << "'" nl;
	} catch (std::exception & e) {
		std::cout << e.what() < nl;
	}

	std::cout << "int: ";
	try {
		int i = static_cast<int> (*this);
		std::cout << i << nl;
	} catch (std::exception & e) {
		std::cout << e.what() << nl;
	}

	// use `std::setiosflags(std::ios::fixed)`
}