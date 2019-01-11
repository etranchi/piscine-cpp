/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:03:23 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/11 15:03:24 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"


Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {

}

Enemy::~Enemy() {}

int Enemy::getHP(void) const {
    return this->_hp;
}

void Enemy::takeDamage(int dmg) {
    if (dmg < 0) {
        return;
    }
    this->_hp -= dmg;
}

std::string Enemy::getType() const {
    return this->_type;
}