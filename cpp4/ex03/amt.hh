#include "_Cpp04.hpp"
#include "icr.hh"

class	icr;

class	amt
{

std::string	m_type;
public:
	amt();
	virtual ~amt();
	amt(amt const &);
	amt(std::string const &);
	amt & operator = (amt const &);

	std::string const & getType() const;

	virtual amt * clone() const = 0;
	virtual void use(icr &);
};
