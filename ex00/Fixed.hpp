#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed {
    private :
    int                 raw;
    const static int    inte = 8;

    public :
    Fixed();
    Fixed(Fixed const &fixed);
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    Fixed   operator=(const Fixed &Fixed);

};

#endif
