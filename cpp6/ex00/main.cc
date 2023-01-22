#include "iostream"
#include "string"
#include "limits"
#include "_Cpp06_.hh"

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
	void		printCore();
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
