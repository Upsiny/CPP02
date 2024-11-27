#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed ( void ) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed ( void ) {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed ( int i ) {
    this->integer = i;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed ( float i ) {
    this->floa = i;
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed Fixed) {
    std::cout << "Copy constructor called" << '\n';
}

int     toInt( void ) const {
    
}
