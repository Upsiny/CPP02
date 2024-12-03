#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed {
    private :
    int                 raw;
    float               f;
    const static int    inte = 8;

    public :
    Fixed();
    Fixed const(Fixed const &fixed);
    Fixed(int raw);
    Fixed(float f);
    ~Fixed();

//    int     getRawBits( void ) const;
//    void    setRawBits( int const raw );
    Fixed   operator=(const Fixed &Fixed);
    Fixed   operator<<(const Fixed &fixed);
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

#endif
