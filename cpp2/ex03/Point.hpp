#ifndef POINT_HPP
# define POINT_HPP

# include "iostream"
# include "cmath"
# include "Fixed.hpp"

class   Point
{

private:
    Fixed const x;
    Fixed const y;

public:
    // Canon
    Point(); // default 
    ~Point(); // destr
    Point(Point const & ); // copy constr
    Point(Fixed const, Fixed const); // assignment constr

    // Overload =
    Point & operator = (Point const &);
    
    // Getter
    Fixed getX() const;
    Fixed getY() const;
    
    // (Nothing else)


};

bool    bsp(Point const, Point const, Point const, Point const);

#endif