# include "iostream"
# include "string"
# include "zombie_color.hpp"


using namespace	std;


/*		class		*/


class	Zombie
{
	private:

		string	name;
		void		label(void) const;

	public:

		Zombie(string name);
		~Zombie(void);
		string	get_name(void) const;
		void		announce(void) const;
};


/*		prototype		*/


Zombie			*newZombie(string);
void			randomChump(string);
static void		storyline_1(void);
static void		storyline_2(void);
static void		storyline_3(void);
static void		storyline_4(void);


/*		drive		*/


int	main()
{
	Zombie		*luke = newZombie("Luke");
	Zombie		matt("Matthew");

	storyline_1();
	matt.announce();

	storyline_2();
	luke->announce();

	storyline_3();
	randomChump("Paul");

	storyline_4();
	delete	luke;
}


/*		member functions		*/


Zombie::Zombie(string name) : name(name)
{}


string	Zombie::get_name(void) const
{ return (this->name); }


void	Zombie::label(void) const
{ cout << _green "﹤" << this->name << "﹥" _reset; }

void	Zombie::announce(void) const {
	Zombie::label();
	cout << "BraiiiiiiinnnzzzZ... \n";
}


Zombie::~Zombie(void) {
	Zombie::label();
	cout << _cyan "is dead. \n" _reset;
}


/*		non-member function		*/


Zombie	*newZombie(string name) {
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
}


void	randomChump(string name) {
	Zombie	*random_zombie = newZombie(name);
	random_zombie->announce();
	delete	random_zombie;
}


/*		storyline		*/


static void	storyline_1(void)
{
	cout << _yellow "\n[ Meet Matthew, the first ";
	cout << "man-made psychic-vampire of ";
	cout << "the new era. ]\n" _reset ;
	cout << _mag "[ Matthew is created on the ";
	cout << _red "\"Stack\"" _reset ;
	cout << _mag " ]\n[ ie. built with ";
	cout << _red _ital"\"Zombie name(name)\"" _reset ;
	cout << _mag " ]\n\n" _reset ;

}


static void	storyline_2(void)
{
	cout << _yellow "\n[ Here's Luke. Luke is different... ]\n";
	cout << "[ While Matthew is a vampire, Luke is a ghost. ";
	cout << "...A real one. ]\n" _reset ;
	cout << _mag "[ Luke is created on the ";
	cout << _red "\"Heap\"" _reset ;
	cout << _mag " ]\n[ ie. built by using the ";
	cout << _red _ital "\"new\"" _reset ;
	cout << _mag " keyword ]\n\n" _reset ;
}


static void	storyline_3(void)
{
	cout << _yellow "\n[ Paul is born... ";
	cout << "and dead almost instantly. ]\n\n" _reset;
}


static void	storyline_4(void)
{
	cout << _yellow "\n[ Before we go, let's ";
	cout << "KILL Luke. ]\n[ Just because he is the ";
	cout << _ital _red "heap " _reset << _yellow "guy. ]\n";
	cout << "[ ...But we didn't kill Matthew. ]\n\n" _reset;
}
