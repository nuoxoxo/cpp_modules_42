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
Span::Span(const Span & cp) : m_size(cp.size()), m_core()

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

	unsigned int	size(void) const;
}*/
