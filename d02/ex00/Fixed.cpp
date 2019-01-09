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
#include <bitset>

Fixed::Fixed(void) : _data(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)  {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return; 
}
Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}


Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_data = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" <<std::endl;
	return this->_data;
}

void Fixed::setRawBits(int const raw) {
	this->_data = raw;
	return ;
}