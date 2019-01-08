/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 15:36:23 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 15:36:25 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string name){
	std::cout << "Weapon creation" << std::endl;
	setType(name);
}

Weapon::~Weapon() {
	std::cout << "Weapon destroyed" << std::endl;
}

void Weapon::setType(std::string type) {
	this->type = type;
	std::cout << this->type << std::endl;
};

const std::string & Weapon::getType() {
	return type;
} 