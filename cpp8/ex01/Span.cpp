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

Span::Span() : m_maxsize() {}
Span::Span(unsigned int N) : m_maxsize(N) {}
Span::Span(const Span & cp) : m_maxsize(cp.size()), m_core(cp.getCore()) {}
Span::~Span() {}

std::vector<int>	Span::getCore() const { return m_core; }
unsigned int		Span::getMaxsize() const { return m_maxsize; }

/*class	Span
{
private:
	std::vector<int>	m_core;
	int			m_maxsize;
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

	const unsigned int	getMaxsize() const;
	const std::vector<int>	& getCore() const;
};*/

Span & Span::operator = (Span const & dummy)
{
	if (this == & dummy)
		return (*this);
	m_size = dummy.getMaxsize();
	m_core = dummy.getCore();
	return (*this);
}

int	Span::shortestSpan() const
{
	/* todo */
}

void	Span::addNumber(int num)
{
	if (!m_maxsize || m_maxsize == m_core.size())
		throw std::exception();
	m_core.push_back(num);
}

