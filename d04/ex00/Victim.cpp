/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:57:27 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 12:57:28 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

std::string Victim::getName(void) const {
    return this->_name;
}

std::string Victim::introduce(void) const {
    return "I'm " + this->getName() + " and I like otters !";
}

void Victim::getPolymorphed(void) const {
    std::cout << this->getName() + " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs) {
    o << rhs.introduce() << std::endl;
    return o;
}


