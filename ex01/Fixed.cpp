#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed ( void ): raw(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const &fixed ) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    return ;
}

Fixed::Fixed(int raw): raw(raw << inte) {
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(float f) {
    std::cout << "Float constructor called" << std::endl;
    this->raw = roundf(f * pow(2, inte));
    return ;
}

Fixed::~Fixed ( void ) {
    std::cout << "Destructor called" << std::endl;
    return ;
}

void    Fixed::setRawBits( int const raw ) {
    this->raw = raw;
    return ;
}

int     Fixed::getRawBits( void ) const {
    return this->raw;
}

int     Fixed::getInte( void ){
    return Fixed::inte;
}

Fixed&     Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw = fixed.getRawBits();
    return *this;
}

float   Fixed::toFloat( void ) const {
    return this->raw / pow(2, inte);
}

int     Fixed::toInt( void ) const {
    return this->raw >> this->inte;
}

// operator <<

std::ostream& operator<<(std::ostream& o, const Fixed& nbr) {
    if (nbr.getRawBits() % Fixed::getInte())
        o << nbr.toFloat();
    else
        o << nbr.toInt();
    return o;
}
