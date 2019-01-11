/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:03:42 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 17:03:43 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include <iostream>
#include <deque>
#include "ISpaceMarine.hpp"

Squad::Squad() : ISquad() {

}

Squad::~Squad(){
    for (int i = 0; i < (int)this->units.size(); i++) {
        delete this->units[i];
    }
    this->units.clear();

}


int Squad::getCount() const {
    return this->units.size();
}

ISpaceMarine *Squad::getUnit(int nb) const {
    if ((int)this->units.size() > nb ) {
        return (this->units.at(nb));
    }
    return NULL;
}

int Squad::push(ISpaceMarine *to_push) {
    
    std::deque<ISpaceMarine *>::iterator it = find(this->units.begin(), this->units.end(), to_push);
    if (it == this->units.end()) {
        this->units.push_back(to_push);
        return this->getCount();
    }
    return -1;
}


