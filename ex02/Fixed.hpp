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
    float           toFloat( void ) const;
    int             toInt( void ) const;

    Fixed&          operator=(const Fixed &fixed);

// comparaison
    bool          operator>(const Fixed &fixed) const;
    bool          operator<(const Fixed &fixed) const;
    bool          operator>=(const Fixed &fixed) const;
    bool          operator<=(const Fixed &fixed) const;
    bool          operator==(const Fixed &fixed) const;
    bool          operator!=(const Fixed &fixed) const;

// simple math
    Fixed          operator+(const Fixed &fixed) const;
    Fixed          operator-(const Fixed &fixed) const;
    Fixed          operator/(const Fixed &fixed) const;
    Fixed          operator*(const Fixed &fixed) const;

//incremantation
    Fixed&          operator++( void );
    Fixed           operator++( int );
    Fixed&          operator--( void );
    Fixed           operator--( int );

//min max
    static Fixed&      min(Fixed &a, Fixed &b);
    const static Fixed&      min(const Fixed &a, const Fixed &b);
    static Fixed&      max(Fixed &a, Fixed &b);
    const static Fixed&      max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& o, const Fixed& nbr);

#endif
