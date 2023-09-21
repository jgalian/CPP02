#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
    
    public:

        Point();
        Point( const float x, const float y );
        Point( const Point &src );
        ~Point();

        Point&  operator=( const Point &rhs );

        Fixed getX( void ) const ;
        Fixed getY( void ) const ;
    
    private:

        const Fixed _x;
        const Fixed _y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif /* ************************************************* POINT_HPP */