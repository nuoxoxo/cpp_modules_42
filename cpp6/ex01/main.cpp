#include "iostream"
#include "string"
#include "cstdint"

class	Entity
{

public:
	char		chr;
	double		d;
	float		f;
	int		i;
	std::string	s;
};

static uintptr_t	deserialize(uintptr_t);
static uintptr_t	serialize(Entity *);


int	main()
{
	Entity	E;

	return (0);
}

//

static uintptr_t	serialize(Entity* e)
{
	retrun ( reinterpre_cast<uintptr_t>(e) );
}

static uintptr_t	deserialize(uintptr_t p)
{
	return ( reinterpret_cast<Entity*>(p) );
}
