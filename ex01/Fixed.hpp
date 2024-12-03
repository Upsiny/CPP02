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
    Fixed(int raw);
    Fixed(float f);
    ~Fixed();

    int             getRawBits( void ) const;
    static int      getInte( void );
    void            setRawBits( int const raw );
    Fixed&          operator=(const Fixed &fixed);
    float           toFloat( void ) const;
    int             toInt( void ) const;
};

std::ostream& operator<<(std::ostream& o, const Fixed& nbr);

#endif
