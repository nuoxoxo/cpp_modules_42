#include "iostream"
#include "beautify.hh"

using	namespace std;

template<int N>
class	MutantStack
{
private:
	int	m_core[N];
public:
	int	get_size() const {return N;}
};

int	main()
{
	cout << green nl "Test :: array size of N " reset nl nl;
	
	MutantStack<42>	ms;

	cout << "size: " << ms.get_size() << nl;
}
