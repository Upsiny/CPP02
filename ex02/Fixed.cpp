#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed ( void ): raw(0) {
    return ;
}

Fixed::Fixed( Fixed const &fixed ) {
    *this = fixed;
    return ;
}

Fixed::Fixed(int raw): raw(raw << inte) {
    return ;
}

Fixed::Fixed(float f) {
    this->raw = roundf(f * pow(2, inte));
    return ;
}

Fixed::~Fixed ( void ) {
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

// comparaison
bool          Fixed::operator>(const Fixed &fixed) const {
    return (this->raw > fixed.raw);
}

bool          Fixed::operator<(const Fixed &fixed) const {
    return (this->raw < fixed.raw);
}

bool          Fixed::operator>=(const Fixed &fixed) const {
    return (this->raw >= fixed.raw);
}

bool          Fixed::operator<=(const Fixed &fixed) const {
    return (this->raw <= fixed.raw);
}

bool          Fixed::operator==(const Fixed &fixed) const {
    return (this->raw == fixed.raw);
}

bool          Fixed::operator!=(const Fixed &fixed) const {
    return (this->raw != fixed.raw);
}

// simple math
Fixed          Fixed::operator+(const Fixed &fixed) const {
    Fixed   result;

    result.setRawBits(this->getRawBits() + fixed.getRawBits());
    return result;
}

Fixed          Fixed::operator-(const Fixed &fixed) const {
    Fixed   result;

    result.setRawBits(this->getRawBits() - fixed.getRawBits());
    return result;
}

Fixed          Fixed::operator/(const Fixed &fixed) const {
    Fixed   result;

    result.setRawBits((this->getRawBits() << inte) / fixed.getRawBits());
    return result;
}

Fixed          Fixed::operator*(const Fixed &fixed) const {
    Fixed   result;

    result.setRawBits(this->getRawBits() * fixed.getRawBits() >> inte);
    return result;
}

//incremantation
Fixed&          Fixed::operator++( void ) {
    this->raw += 1;
    return *this;
}

Fixed          Fixed::operator++( int ) {
    Fixed	tmp(*this);

	this->raw++;
	return (tmp);
}

Fixed&          Fixed::operator--( void ) {
    this->raw -= 1;
    return *this;
}

Fixed          Fixed::operator--( int ) {
    Fixed	tmp(*this);

	this->raw--;
	return (tmp);
}

// min max
const Fixed&     Fixed::min(const Fixed &a, const Fixed &b){
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed&     Fixed::min(Fixed &a, Fixed &b) {
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed&     Fixed::max(const Fixed &a, const Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

Fixed&     Fixed::max(Fixed &a, Fixed &b) {
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}
