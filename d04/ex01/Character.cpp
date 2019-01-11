/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:04:09 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 15:04:10 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "Character.hpp"

Character::Character(std::string const & name) : _weapon(), _name(name), _ap(40){

}

Character::~Character() {}

void Character::recoverAP() {
    if (this->_ap > 30) {
        return ;
    }
    this->_ap += 10;
}

std::string Character::getAP() const {
    return std::to_string(this->_ap);
}
void Character::equip(AWeapon *weapon) {
    this->_weapon = weapon;
}

std::string Character::introduce() const {
    if (this->_weapon) {
        return this->getName() + " has " + this->getAP() + " AP and wields a " + this->_weapon->getName();
    } else {
        return this->getName() + " has " + this->getAP() + " AP and is unarmed";
    }
    
}

std::string  Character::getName() const {
    return this->_name;
}

void Character::attack(Enemy * enemy) {
    if (this->_ap < this->_weapon->getAPCost()) {
        return; 
    }
    this->_ap -= this->_weapon->getAPCost();
    enemy->takeDamage(this->_weapon->getDamage());
    std::cout << this->getName() + " attacks " + enemy->getType() + " with a " + this->_weapon->getName() << std::endl;
    this->_weapon->attack();
    if (enemy->getHP() <= 0) {
        delete enemy;
    }
}


std::ostream & operator<<(std::ostream & o, Character const & rhs) {
    o << rhs.introduce() << std::endl;
    return o;
}
