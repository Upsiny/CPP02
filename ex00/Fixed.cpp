#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed ( void ): raw(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed ( void ) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const &fixed ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed; // fait une boucle
    return ;
}

void    Fixed::setRawBits( int const raw ) {
    this->raw = raw;
    return ;
}

int     Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->raw;
}

Fixed&     Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw = fixed.getRawBits();
    return *this;
}

// number = 2^(n)
