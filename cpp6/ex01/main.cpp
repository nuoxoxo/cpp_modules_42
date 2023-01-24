#include "iostream"
#include "string"
#include "cstdlib"
#include "cstdint"

#define YELL "\033[0;33m"
#define GREEN "\033[0;32m"
#define RESET "\033[0;0m"

// define

struct	Data
{
	std::string	core;
	int		r, c;
	void		existence() {
			std::cout
			<< "data name:\t" << core
			<< "\naddress:\t" << this
			<< "\nx coordinate:\t" << c
			<< "\ny coordinate:\t" << r
			<< "\n\n";
	};
};

static	Data *deserialize(uintptr_t _) {
	return (reinterpret_cast<Data*>(_));
}

static	uintptr_t serialize(Data * _) {
	return (reinterpret_cast<uintptr_t>(_));
}

// drive

int	main(int c, char **v)
{
	std::string	core = c > 1 ? std::string(v[1]) : "Dasein";

	std::cout << GREEN "Test 0 :: \n\n" RESET;
	{
		Data	dat;

		dat.core = core;
		srand(time(0));
		dat.r = (int) rand() % 42;
		dat.c = (int) rand() % 42;
		dat.existence();		
		std::cout 
		<< YELL << & dat
		<< RESET " & dat printed from main \n\n";

		Data	*D = deserialize(serialize(& dat));

		std::cout << "{ deserialize(serialize(& data)) } \n\n";

		D->existence();
		std::cout 
		<< YELL << & dat
		<< RESET " & dat printed from main \n\n";

	}
	std::cout << GREEN "Test 1 :: \n\n" RESET;
	{
		Data	dat;

		dat.core = core;
		srand(time(0));
		dat.r = (int) rand() % 42;
		dat.c = (int) rand() % 42;
		dat.existence();

		std::cout 
		<< YELL << & dat
		<< RESET " (printed from main) \n\n";

		uintptr_t	U = serialize(& dat);
		Data		*D = deserialize(U);

		std::cout
		<< "{ uintptr_t  U = serialize(& dat); } \n"
		<< "{ Data       *D = deserialize(U); } \n\n";

		D->existence();

		std::cout 
		<< YELL << & dat
		<< RESET " &dat printed from main \n";
		
		std::cout
		<< YELL << U << RESET
		<< " value of the unsigned int ptr \n\n";
	}
	std::cout << GREEN "Test 2 :: \n\n" RESET;
	{
		Data	*dat = new Data;

		dat->core = core;
		srand(time(0));
		dat->r = (int) rand() % 42;
		dat->c = (int) rand() % 42;
		dat->existence();		
		
		std::cout 
		<< YELL << dat << RESET " dat \n"
		<< YELL << &dat << RESET " &dat \n\n";

		uintptr_t	U = serialize(dat);
		Data		*D = deserialize(U);

		std::cout
		<< "{ Data *dat = new Data; } \n"
		<< "{ delete dat; } \n\n";

		D->existence();
		
		std::cout 
		<< YELL << dat << RESET " dat \n"
		<< YELL << &dat << RESET " &dat \n";
		
		std::cout
		<< YELL << U << RESET
		<< " value of the unsigned int ptr \n\n";

		delete dat;
	}
}

