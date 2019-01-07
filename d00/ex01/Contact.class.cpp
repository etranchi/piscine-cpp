/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 12:20:20 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/07 12:20:21 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact() {
	return;
}

Contact::~Contact(void) {
	return;
}



std::string Contact::createLine(std::string ref) const {
	std::string buf;
	
	if (ref.size() == 10) {
		buf = ref.substr(0, 10);	
	} else if (ref.size() > 10) {
		buf = ref.substr(0, 10);
		buf[buf.size() - 1] = '.';
	}
	 else {
		buf = ref.substr(0, ref.size());
	}
	return buf;
}

void Contact::putDescription(int nb) const {
	std::cout.width(11); std::cout << right << nb << "|";
	std::cout.width(11); std::cout << right << this->createLine(this->first_name) << "|";
	std::cout.width(11); std::cout << right << this->createLine(this->last_name) <<  "|";
	std::cout.width(11); std::cout << right << this->createLine(this->nickname) << "|";
	std::cout << std::endl;
}