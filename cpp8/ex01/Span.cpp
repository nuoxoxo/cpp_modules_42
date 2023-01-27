/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                             ~  ~  ~  ~  ~    ~                             */
/*                              ~    _ ~ _   o>                               */
/*                             ~  \ / \ / \ /  ~                              */
/*                              ~  ~      ~    ~                              */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                 Template                                   */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/*                                                                            */
/* *********************  ʕ • ᴥ•ʔ  mode: todo  (⊙. ⊙ )  ********************* */

#include "Span.hpp"

Span::Span() : m_size() {}
Span::Span(unsigned int N) : m_size(N) {}
Span::Span(const Span & cp) : m_size(cp.size()), m_core(cp.getCore()) {}
Span::~Span() {}

std::vector<int>	Span::getCore() const { return m_core; }
unsigned int		Span::size() const { return m_size; }

/*class	Span
{
private:
	std::vector<int>	m_core;
	int			m_size;
public:
	// canon + param constr
	Span();
	Span(const Span &);
	Span(unsigned int N);
	Span & operator = (const Span & );
	~Span();

	int	shortestSpan(void) const;
	int	longestSpan(void) const;
	void	addNumber(int);

	const unsigned int	size() const;
	const std::vector<int>	& getCore() const;
};*/

Span & Span::operator = (Span const & dummy)
{
	if (this == & dummy)
		return (*this);
	m_size = dummy.size();
	m_core = dummy.getCore();
	return (*this);
}

void	Span::addNumber(int n)
{
	if (!m_size || )
}



