#include "_Cpp04_.hpp"
#include "amt.hh"

class	amt;

class	icr
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
	virtual void use(irc &);
};
