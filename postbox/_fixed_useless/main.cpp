#include "iostream"
#define called " called\n"
#define yel "\x1b[33m"
#define grn "\x1b[32m"
#define res " \x1b[0m"
#define F __FUNCTION__

//	class

class	Fixed {
	private:
		int			fixed_point_value;
		static const int	number_of_fractional_bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &);
		~Fixed(void);
		Fixed			& operator = (Fixed const &);
		void			setRawBits(int const);
		int			getRawBits(void) const;
};

//	drive

int	main()
{

	Fixed a; // constr ( + destr called on exit )

	Fixed b( a ); // copy_constr + getRawBits ( + destr called on exit )

	Fixed c; // constr ( + destr called on exit )

	c = b; // operator= assignment operator + getRawBits


	// only these calls are made if 3 stdout lines are commented out
	/*
		//	"Upper calls" (4 lines above)

		Fixed  Default constructor called
		Fixed Copy constructor called
		getRawBits getRawBits member function called
		Fixed  Default constructor called
		operator= Assignation operator called
		getRawBits getRawBits member function called


		//	default destr calls (called in final stdout part)

		~Fixed Destructor called
		~Fixed Destructor called
		~Fixed Destructor called
	*/

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}


//	member functions

Fixed::Fixed()
{
	this->fixed_point_value = 0;
	std::cout << yel << yel << F << res << res << "Default constructor" << called;
}

Fixed::Fixed(Fixed const & dummy)
{
	std::cout << yel << F << res << "Copy constructor" << called;
	this->fixed_point_value = dummy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << yel << F << res << "Destructor" << called;
}

Fixed	& Fixed::operator = (Fixed const & dummy)
{
	std::cout << yel << F << res << "Assignation operator" << called;
	this->fixed_point_value = dummy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << yel << F << res << "getRawBits member function" << called;
	return (this->fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << yel << F << res << "setRawBits member function" << called;
	this->fixed_point_value = raw;
}
