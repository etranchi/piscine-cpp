/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etranchi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 15:36:39 by etranchi          #+#    #+#             */
/*   Updated: 2019/01/08 15:36:40 by etranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
	std::cout << "HumanA created" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA destroyed" << std::endl;
}




void HumanA::attack() {
	std::cout << this->name << " attack with " << this->weapon.getType() << std::endl; 	
}

