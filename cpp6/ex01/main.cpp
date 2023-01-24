#include "iostream"
#include "string"
#include "cstdlib"
#include "cstdint"

// define

struct	_point_
{
	std::string	core;
	int		r, c;
	void		existence() {
			std::cout
			<< core;
			<< "\nx: " << c;
			<< "\ny: " << r << "\n";
	};
};

static uintptr_t	deserialize(uintptr_t);
static uintptr_t	serialize(Entity *);

// drive

int	main()
{
	_point_	pt;

	pt.core = "you got a point. \n";
	srand(time(0));
	pt.r = (int) rand() % 3;
	pt.c = (int) rand() % 3;
	pt.exsitence();

	

	return (0);
}


// static

static uintptr_t	serialize(Entity* entity)
{
	retrun ( reinterpre_cast<uintptr_t> (entity) );
}

static uintptr_t	deserialize(uintptr_t ptr)
{
	return ( reinterpret_cast<Entity*> (ptr) );
}

