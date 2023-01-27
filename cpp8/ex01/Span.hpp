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

#ifndef SPAN_HPP
# define SPAN_HPP

class	Span
{
private:
	std::vector<int>	m_core;
public:
	// canon + param constr
	Span();
	Span();
	Span(const Span &);
	Span & operator = (const Span & );
	~Span();

	void	addNumber(int);
	int	longestSpan(void) const;
	int	shortestSpan(void) const;
}
