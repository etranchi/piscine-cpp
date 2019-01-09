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

#ifndef FIXED_H
# define FIXED_H


class Fixed {
public:
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);
	Fixed & operator=(Fixed const & rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);


private:
	int _data;
	static const int nfs = 8;
};

#endif

