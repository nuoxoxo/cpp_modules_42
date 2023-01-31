#include "iostream"
#include "beautify.hh"

using	namespace std;

template<int N, typename T>
class	MutantStack
{
private:
	T	m_core[N];
public:
	int	get_size() const {return N;}
};

int	main()
{
	cout << green nl "Test :: arr of anything " reset nl nl;
	
	MutantStack<42, string>	ms1;
	MutantStack<64, double>	ms2;

	cout << "size ms1: " << ms1.get_size() << nl;
	cout << "size ms2: " << ms2.get_size() << nl;
}
