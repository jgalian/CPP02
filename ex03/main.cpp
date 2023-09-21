#include "Point.hpp"

/*

   B (0,5)

    |                               x P2 (9,5)
    | 
    |   x P1 (1,2)
    |
    |__ __ __ __ __   C (5,0)

   A (0,0)

*/


int main ( void ) 
{
    {
        if ( bsp( Point(0, 0), Point(0, 5), Point(5, 0), Point(1, 2) ) == true ) {
            std::cout << "Point is in the triangle" << std::endl;
        } else {
            std::cout << "Point is not in the triangle" << std::endl;
        }
    }
    
    std::cout << "-----------------------------" << std::endl;

    {
        if ( bsp( Point(0, 0), Point(0, 5), Point(5, 0), Point(9, 5) ) == true ) {
            std::cout << "Point is in the triangle" << std::endl;
        } else {
            std::cout << "Point is not in the triangle" << std::endl;
        }
    }
    return 0;
}