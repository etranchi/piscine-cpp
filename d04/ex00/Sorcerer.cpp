/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:57:17 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 12:57:19 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"


std::ostream & operator<<(std::ostream & o, Sorcerer & rhs) {
	o << rhs.introduce() << std::endl;
	return o;
}


std::string Sorcerer::introduce(void) {
    return "I am " + this->getName() + ", " + this->getTitle() + ", and i like PONIES !";
}

std::string Sorcerer::getName(void) {
    return this->_name;
}

std::string Sorcerer::getTitle(void) {
    return this->_title;
}

void Sorcerer::polymorph(Victim const & victim) const {
    victim.getPolymorphed();
}