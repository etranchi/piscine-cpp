/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 13:12:23 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/09 13:12:26 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _data(0) {
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)  {
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return; 
}

Fixed::Fixed(int const nb) {
    //std::cout << "Int constructor called" << std::endl;
    this->_data = nb << this->_nfs;
}

Fixed::Fixed(float const f) {

    //std::cout << "Float constructor called with data: "<< f << std::endl;

    this->_data = roundf(f * (1 << this->_nfs));
}

Fixed::~Fixed(void) {
	//std::cout << "Destructor called" << std::endl;
}

int         Fixed::toInt() const {
    return this->_data >> this->_nfs;
}

float        Fixed::toFloat() const {
    return float(this->_data) / (1 << this->_nfs);
}


Fixed & Fixed::operator=(Fixed const & rhs) {
	//std::cout << "Assignation operator called" << std::endl;
	this->_data = rhs.getRawBits();
	return *this;
}

Fixed Fixed::operator+(Fixed const & rhs) {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs) {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs) {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs) {
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator++() {
	++this->_data;
	return *(this);
}

Fixed & Fixed::operator--() {
	++this->_data;
	return *(this);
}

Fixed Fixed::operator++(int n) {
	Fixed tmp = *this;
	this->_data++;
	return tmp;
}

Fixed Fixed::operator--(int n) {
	Fixed tmp = *this;
	--(this->_data);
	return tmp;
}

bool Fixed::operator>(Fixed const & rhs) {
	if (this->toFloat() > rhs.toFloat()) {
		return true;
	}
	return false;
}

bool Fixed::operator>=(Fixed const & rhs) {
	if (this->toFloat() >= rhs.toFloat()) {
		return true;
	}
	return false;
}

bool Fixed::operator<(Fixed const & rhs) {
	if (this->toFloat() < rhs.toFloat()) {
		return true;
	}
	return false;
}

bool Fixed::operator<=(Fixed const & rhs) {
	if (this->toFloat() <= rhs.toFloat()) {
		return true;
	}
	return false;
}

bool Fixed::operator==(Fixed const & rhs) {
	if (this->toFloat() == rhs.toFloat()) {
		return true;
	}
	return false;
}

bool Fixed::operator!=(Fixed const & rhs) {
	if (this->toFloat() != rhs.toFloat()) {
		return true;
	}
	return false;
}

int Fixed::getRawBits() const {
	// //std::cout << "getRawBits member function called" <<std::endl;
	return this->_data;
}

void Fixed::setRawBits(int const raw) {                                                                                                                                                                                                                                                                                  
	this->_data = raw;
	return ;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

const Fixed &Fixed::max(const Fixed &lhs,const Fixed &rhs) {
	return lhs.toFloat() > rhs.toFloat() ? lhs : rhs;
}

const Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs) {
	return lhs.toFloat() > rhs.toFloat() ? rhs : lhs;
}
