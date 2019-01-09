/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 13:11:56 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/09 13:11:57 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

#ifndef FIXED_H
# define FIXED_H


class Fixed {
public:
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed(int const value);
	Fixed(float const value);
	~Fixed(void);
	Fixed & operator=(Fixed const & rhs);
	bool operator>(Fixed const & rhs);
	bool operator<(Fixed const & rhs);
	bool operator>=(Fixed const & rhs);
	bool operator<=(Fixed const & rhs);
	bool operator==(Fixed const & rhs);
	bool operator!=(Fixed const & rhs);
	Fixed operator+(Fixed const & rhs);
	Fixed operator-(Fixed const & rhs);
	Fixed operator*(Fixed const & rhs);
	Fixed operator/(Fixed const & rhs);
	Fixed & operator++(); // pre-increment
	Fixed operator++(int n); // post-increment
	Fixed operator--(int n);
	Fixed & operator--();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	const static Fixed  &max(const Fixed &lhs, const Fixed &rhs);
	const static Fixed  &min(const Fixed &lhs, const Fixed &rhs);

private:
	int _data;
	static const int _nfs = 8;
};




std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif

