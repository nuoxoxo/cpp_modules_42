#include "iostream"
#include "string"
#include "limits"

class	Convertor
{

private:
	std::string	m_core_string;

public:
	// Canon
	Convertor();
	~Convertor();
	Convertor(std::string);
	Convertor(Convertor const & obj);
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
};

Convertor::Convertor() {};
Con
