#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed {
    private :
    float   floa = 0;
    int     integer = 0;

    public :
    Fixed::Fixed();
    Fixed::Fixed(Fixed Fixed);
    Fixed::Fixed( int i );
    Fixed::Fixed( float i );
    Fixed::~Fixed();

    float   toFloat( void ) const;
    int     toInt( void ) const;
}

#endif
